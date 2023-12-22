#include <stdio.h>
 
int isPrime(int n) {
    if (n <= 1) {
        return 0;  
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1;  
}
 
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int countPowerfulNumbers(int l, int r) {
    int count = 0;
    for (int num = l; num <= r; num++) {
        int sum = sumOfDigits(num);
        if (isPrime(sum)) {
            count++;
        }
    }
    return count;
}
 
int main() {
    int l, r;
    scanf("%d %d", &l, &r);
 
    int result = countPowerfulNumbers(l, r);
    printf("%d\n", result);
 
    return 0;
}