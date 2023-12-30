#include<stdio.h>
#include<math.h>
int ispalindrome(int n){
    int origin_num = n;
    int reversed_num = 0;
    while(n > 0){
        int digit = n % 10;
        reversed_num = reversed_num * 10 + digit;
        n/=10;
    }
    return reversed_num == origin_num;
}
int divideby10(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        if(sum % 10 == 0){
            return 1;
        }
        n/=10;
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count = 0;
        for(int i =pow(10,n - 1) ; i < pow(10,n); i++){
            if(ispalindrome(i) &&divideby10(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }
}