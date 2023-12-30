<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>
void primeFactorization(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        primeFactorization(n);
        printf("\n");
    }
=======
#include<stdio.h>
void primeFactorization(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        primeFactorization(n);
        printf("\n");
    }
>>>>>>> 676aa6e (Add files via upload)
=======
#include<stdio.h>
void primeFactorization(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        primeFactorization(n);
        printf("\n");
    }
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
}