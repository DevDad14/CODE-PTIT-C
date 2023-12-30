#include<stdio.h>
#include<math.h>
int isprime(int n){
    if(n == 0 || n == 1) return 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int multiply(int n){
    int multiply = 1;
    for(int i = 0 ; i < n ; i++){
        multiply*=i;
    }
    if(multiply == n){
        return 1;
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i = 0 ; i < n ; i++){
            if(n % i == 0 && isprime(i) && multiply(i)){
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
}