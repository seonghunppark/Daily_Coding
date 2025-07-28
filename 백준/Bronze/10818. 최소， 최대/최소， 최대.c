#include <stdio.h>

int main() {
    int N; // 숫자의 개수를 저장할 변수
    int num; // 각 숫자를 읽어들일 변수
    int min_val; // 현재까지 발견된 최솟값을 저장할 변수
    int max_val; // 현재까지 발견된 최댓값을 저장할 변수

    // 첫 번째 줄에서 N을 읽어들입니다.
    scanf("%d", &N);

    // 첫 번째 숫자를 읽어들입니다.
    scanf("%d", &num);

    // min_val과 max_val을 첫 번째 숫자로 초기화합니다.
    min_val = num;
    max_val = num;

    // N-1번 반복하여 나머지 숫자들을 읽어들입니다.
    // (첫 번째 숫자는 이미 읽었으므로)
    for (int i = 1; i < N; i++) {
        scanf("%d", &num); // 다음 숫자를 읽어들입니다.

        // 현재 숫자가 min_val보다 작으면 min_val을 업데이트합니다.
        if (num < min_val) {
            min_val = num;
        }

        // 현재 숫자가 max_val보다 크면 max_val을 업데이트합니다.
        if (num > max_val) {
            max_val = num;
        }
    }

    // 최솟값과 최댓값을 공백으로 구분하여 출력합니다.
    printf("%d %d\n", min_val, max_val);

    return 0; // 프로그램이 성공적으로 실행되었음을 나타냅니다.
}