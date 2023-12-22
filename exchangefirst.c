<<<<<<< HEAD
#include<stdio.h>
#include<string.h>

int main(){
    char c[100000];
    scanf("%s", c);

    int temp = c[0];
    c[0] = c[strlen(c) - 1];
    c[strlen(c) - 1] = temp;

    if(c[0] == '0'){
        for(int i = 1; i < strlen(c); i++){
            printf("%c", c[i]);
        }
    }
    else {
        for(int i = 0; i < strlen(c); i++){
            printf("%c", c[i]);
        }
    }

    return 0;
}
=======
#include<stdio.h>
#include<string.h>

int main(){
    char c[100000];
    scanf("%s", c);

    int temp = c[0];
    c[0] = c[strlen(c) - 1];
    c[strlen(c) - 1] = temp;

    if(c[0] == '0'){
        for(int i = 1; i < strlen(c); i++){
            printf("%c", c[i]);
        }
    }
    else {
        for(int i = 0; i < strlen(c); i++){
            printf("%c", c[i]);
        }
    }

    return 0;
}
>>>>>>> 676aa6e (Add files via upload)
