#include<stdio.h>
#include<string.h>
int main(){
    char c[100000];
    scanf("%s",&c);
    int lenght = strlen(c);
    int temp = c[0];
    c[0] = c[lenght - 1];
    c[lenght - 1] = temp;
    int flag = 0;
    for(int i = 0 ; i < lenght ; i++){
        if(c[0] == '0'){
            flag = 1;
        }
    } 
    if(flag == 1){
    for(int i = 1 ; i < lenght ;i++){
        printf("%c",c[i]);
    }
    }
    else {
        for(int i = 0 ; i < lenght ; i++){
            printf("%c",c[i]);
        }
    }
}