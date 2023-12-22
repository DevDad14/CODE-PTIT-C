<<<<<<< HEAD
#include<stdio.h>
#include<math.h>

int find(int n){
    int res;
    for(int i = 2 ; i <= sqrt(n); i++){
        while(n % i == 0){
            res = i;
            n/=i;
        }
    }
    if(n != 1){
        res = n;
        return res;
    }
}
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n",find(n));
    }

    return 0; 
}
=======
#include<stdio.h>
#include<math.h>

int find(int n){
    int res;
    for(int i = 2 ; i <= sqrt(n); i++){
        while(n % i == 0){
            res = i;
            n/=i;
        }
    }
    if(n != 1){
        res = n;
        return res;
    }
}
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n",find(n));
    }

    return 0; 
}
>>>>>>> 676aa6e (Add files via upload)
