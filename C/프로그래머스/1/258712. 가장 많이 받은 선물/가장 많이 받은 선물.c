#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FRIENDS 50

int findIndex(const char* friends[], size_t n, const char* name) {
    for (size_t i = 0; i < n; i++)
        if (strcmp(friends[i], name) == 0) return (int)i;
    return -1;
}

int solution(const char* friends[], size_t friends_len, const char* gifts[], size_t gifts_len) {
    int n = (int)friends_len;
    static int count[MAX_FRIENDS][MAX_FRIENDS];
    int given[MAX_FRIENDS] = {0};
    int received[MAX_FRIENDS] = {0};
    int next[MAX_FRIENDS] = {0};
    memset(count, 0, sizeof(count));

    for (size_t k = 0; k < gifts_len; k++) {
        char a[11], b[11];
        sscanf(gifts[k], "%s %s", a, b);
        int i = findIndex(friends, friends_len, a);
        int j = findIndex(friends, friends_len, b);
        count[i][j]++;
        given[i]++;
        received[j]++;
    }

    int idx[MAX_FRIENDS];
    for (int i = 0; i < n; i++) idx[i] = given[i] - received[i];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (count[i][j] > count[j][i]) {
                next[i]++;             // 1순위: 직접 거래 비교
            } else if (count[i][j] < count[j][i]) {
                next[j]++;
            } else {
                if (idx[i] > idx[j]) next[i]++;      // 2순위: 지수 비교
                else if (idx[i] < idx[j]) next[j]++;
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
        if (next[i] > answer) answer = next[i];

    return answer;
}