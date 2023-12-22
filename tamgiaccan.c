<<<<<<< HEAD
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    int count = 0;
    for(int i = 0 ; i <= n ; i++){
        if(i % n == 0){
            count++;
        }
    }
    printf("%d",count);
=======
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    int count = 0;
    for(int i = 0 ; i <= n ; i++){
        if(i % n == 0){
            count++;
        }
    }
    printf("%d",count);
>>>>>>> 676aa6e (Add files via upload)
}