<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long count = 0;
    for(int i = 0 ; i <= n ; i++){
        if(i % n == 0){
            count++;
        }
    }
    printf("%lld",count);
=======
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long count = 0;
    for(int i = 0 ; i <= n ; i++){
        if(i % n == 0){
            count++;
        }
    }
    printf("%lld",count);
>>>>>>> 676aa6e (Add files via upload)
=======
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long count = 0;
    for(int i = 0 ; i <= n ; i++){
        if(i % n == 0){
            count++;
        }
    }
    printf("%lld",count);
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
}