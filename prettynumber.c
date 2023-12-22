#include<stdio.h>
#include<math.h>
int isprime(int n){
    if(n == 0 || n == 1) return 0;
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int isPerfectSquare(int n){
    int SQRT = sqrt(n);
    return SQRT * SQRT == n;
}
int isFibo(int n){
    return isPerfectSquare(5*n*n+4) || isPerfectSquare(5*n*n-4);
}
int isperfect(int n){
    int originalN = n; 
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    if(isprime(originalN) && isFibo(sum)){
        return 1;
    }
    return 0;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a < b){
        for(int i = a ; i <= b ; i++){
            if(isperfect(i)){
                printf("%d ",i);
            }
        }
    }
    if(b < a){
        for(int i = b ; i <= a ; i++){
            if(isperfect(i)){
                printf("%d ",i);
            }
        }
    }

}