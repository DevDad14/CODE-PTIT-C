#include <stdio.h>
#include <string.h>

int main() {
    char c[1000];
    scanf("%s", c);

    for (int i = 0; i < strlen(c); i++) {
        printf("%c %c\n", c[0], c[strlen(c) - 1]);
        break;
    }

    return 0;
}
