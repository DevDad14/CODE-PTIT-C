<<<<<<< HEAD
<<<<<<< HEAD
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
=======
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
>>>>>>> 676aa6e (Add files via upload)
=======
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
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
