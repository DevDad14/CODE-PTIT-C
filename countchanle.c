#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count_odd = 0;
    int count_even = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 == 0){
            count_even++;
        }
        else {
            count_odd++;
        }
        n/=10;
            }
    printf("%d %d", count_odd , count_even);
}