#include <stdio.h>

unsigned long long tinhGiaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * tinhGiaiThua(n - 1);
    }
}

int kiemTraStrong(int n) {
    int temp = n;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum += tinhGiaiThua(digit);
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int N;
    scanf("%d", &N);
    if (kiemTraStrong(N)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
