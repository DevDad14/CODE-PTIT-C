#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int count = 0; 

    for (int i = 1; i * i <= n; i++) {
        int square = i * i;
        if (square >= m) {
            count++;
        }
    }

    printf("%d\n", count);


    for (int i = 1; i * i <= n; i++) {
        int square = i * i;
        if (square >= m) {
            printf("%d\n", square);
        }
    }

    return 0;
}
