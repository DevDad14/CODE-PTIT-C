<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int end_digit8(const char *c) {
    int len = strlen(c);
    if (len > 0 && c[len - 1] == '8') {
        return 1;
    }

    return 0;
}

int sumOfDigits(const char *str) {
    int sum = 0;

    while (*str) {
        if (isdigit(*str)) {
            sum += (*str - '0'); 
        }
        str++;
    }

    return sum;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char c[100000];
    scanf("%s",&c);
    if(end_digit8(c) && sumOfDigits(c) % 10 == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    }
=======
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int end_digit8(const char *c) {
    int len = strlen(c);
    if (len > 0 && c[len - 1] == '8') {
        return 1;
    }

    return 0;
}

int sumOfDigits(const char *str) {
    int sum = 0;

    while (*str) {
        if (isdigit(*str)) {
            sum += (*str - '0'); 
        }
        str++;
    }

    return sum;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char c[100000];
    scanf("%s",&c);
    if(end_digit8(c) && sumOfDigits(c) % 10 == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    }
>>>>>>> 676aa6e (Add files via upload)
=======
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int end_digit8(const char *c) {
    int len = strlen(c);
    if (len > 0 && c[len - 1] == '8') {
        return 1;
    }

    return 0;
}

int sumOfDigits(const char *str) {
    int sum = 0;

    while (*str) {
        if (isdigit(*str)) {
            sum += (*str - '0'); 
        }
        str++;
    }

    return sum;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char c[100000];
    scanf("%s",&c);
    if(end_digit8(c) && sumOfDigits(c) % 10 == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    }
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
}