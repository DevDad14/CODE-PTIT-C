#include <stdio.h>
#include <string.h>
void check_alphabet(char str[]){
    int len = strlen(str);
    for(int i = 0 ; i < len ; i++){
        if(('a' <= i <= 'z') && ('A' <= i <= 'Z')){
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char N[1001];
        scanf("%s", N);

        if (isDivisibleBy3(N)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
