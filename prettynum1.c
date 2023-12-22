#include<stdio.h>
#include<string.h>

int ispalindrome(const char *s) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int hasOddDigit(const char *s) {
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        int digit = s[i] - '0';
        if (digit % 2 != 0) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char c[501]; 
        scanf(" %[^\n]", c); 

        if (!hasOddDigit(c) && ispalindrome(c)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
