#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 최대공약수(GCD)를 구하는 함수
long long get_gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 최소공배수(LCM)를 구하는 함수
long long get_lcm(long long a, long long b) {
    return (a / get_gcd(a, b)) * b;
}

// signals_rows는 2차원 배열 signals의 행 길이, signals_cols는 열 길이입니다.
int solution(int** signals, size_t signals_rows, size_t signals_cols) {
    long long max_t = 1;
    
    // 각 신호등의 주기 길이를 저장할 배열 동적 할당
    int* cycles = (int*)malloc(signals_rows * sizeof(int));
    
    // 각 신호등의 주기(G+Y+R)를 계산하고, 모든 신호등 주기의 최소공배수(LCM) 구하기
    for (size_t i = 0; i < signals_rows; i++) {
        int g = signals[i][0];
        int y = signals[i][1];
        int r = signals[i][2];
        
        int c = g + y + r;
        cycles[i] = c;
        max_t = get_lcm(max_t, c);
    }
    
    // 0초(실제 1초)부터 최소공배수(max_t) 시간 전까지 탐색
    for (long long t_prime = 0; t_prime < max_t; ++t_prime) {
        bool all_yellow = true;
        
        for (size_t i = 0; i < signals_rows; ++i) {
            int g = signals[i][0];
            int y = signals[i][1];
            int c = cycles[i];
            
            // 현재 사이클 내에서의 경과 시간
            int mod_t = t_prime % c;
            
            // 노란불(Yellow) 구간: G <= mod_t < G + Y
            // 이 구간에 속하지 않으면 노란불이 아님
            if (mod_t < g || mod_t >= g + y) {
                all_yellow = false;
                break;
            }
        }
        
        // 모든 신호등이 노란불 조건을 만족한 경우
        if (all_yellow) {
            free(cycles); // 동적 할당 메모리 해제
            return (int)(t_prime + 1); // 실제 시간은 t_prime + 1
        }
    }
    
    free(cycles); // 동적 할당 메모리 해제
    return -1; // 전체 사이클을 돌았는데도 겹치는 구간이 없는 경우
}