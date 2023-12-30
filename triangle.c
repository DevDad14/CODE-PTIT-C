#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < (4-i+1);j++){
            printf(" ");
        }
        for(int k = 0 ; k < i ; k++){
            printf("%d",i);
        }
        printf("\n");
    }
}