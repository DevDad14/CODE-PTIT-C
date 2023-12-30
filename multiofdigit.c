#include<stdio.h>
int multi_of_digit(int n){
    int multi = 1;
    while(n > 0){
        int digit = n % 10;
        multi *= digit;
        n/=10;
    }
    return multi;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",multi_of_digit(n));
}