#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n-1];
        int max = a[0];
        int res = 0;
        for(int i = 0 ; i < n - 1; i++){
            scanf("%d",&a[i]);
        }
        for(int i = 0 ; i < n - 1 ; i++){
            if(a[i] > max){
                max = a[i];
            }
        }
        res = max - 1;
        for(int i = 1 ; i < max ; i++){
            while(res != i){
                res--;
            }
        }
        printf("%d",res);
    }
}