<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int end_digit_8(const char *c) {
    int length = strlen(c);
    if (c[length - 1] == '8') {
        return 1;
    }
    return 0;
}

int sum_of_digit(const char *c) {
    int length2 = strlen(c);
    int sum = 0;
    for (int i = 0; i < length2; i++) {
        int result = c[i] - '0';
        sum += result;
    }
    if (sum % 10 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char c[100000];
        scanf("%s", c);
        if (end_digit_8(c) && sum_of_digit(c)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
=======
#include <stdio.h>
#include <string.h>

int end_digit_8(const char *c) {
    int length = strlen(c);
    if (c[length - 1] == '8') {
        return 1;
    }
    return 0;
}

int sum_of_digit(const char *c) {
    int length2 = strlen(c);
    int sum = 0;
    for (int i = 0; i < length2; i++) {
        int result = c[i] - '0';
        sum += result;
    }
    if (sum % 10 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char c[100000];
        scanf("%s", c);
        if (end_digit_8(c) && sum_of_digit(c)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
>>>>>>> 676aa6e (Add files via upload)
=======
#include <stdio.h>
#include <string.h>

int end_digit_8(const char *c) {
    int length = strlen(c);
    if (c[length - 1] == '8') {
        return 1;
    }
    return 0;
}

int sum_of_digit(const char *c) {
    int length2 = strlen(c);
    int sum = 0;
    for (int i = 0; i < length2; i++) {
        int result = c[i] - '0';
        sum += result;
    }
    if (sum % 10 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char c[100000];
        scanf("%s", c);
        if (end_digit_8(c) && sum_of_digit(c)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
