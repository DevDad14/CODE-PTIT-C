#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);

    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }

    if (sum == N) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
