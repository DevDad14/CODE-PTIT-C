#include<stdio.h>
#include<stdlib.h>
int main(){
    long long n;
    scanf("%lld",&n);
    int a[n - 1];
    for(int i = 0 ; i < n - 1 ; i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int b[10] = {0};
    int count = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        b[a[i]]++;
        count++;
    }
    for(int i = 0 ; i < count ; i++){
        if(b[a[i]] >= n - 1){
            printf("0");
            b[a[i]] = 0;
            break;
        }
        else if(b[a[i]] < n - 1){
            if(k == 1){
                if(b[9] >= 1){
                    printf("9");
                    break;
                }
                else {
                    if(b[10] >= 1){
                        printf("10");
                    }
                    else if(b[10] < 1) {
                        printf("Impossible");
                    }
                    break;
                }
        }
         if(k == 2){
            if(b[7] >= 1){
                printf("7");
                break;
            }
            else {
                if(b[8] >= 1){
                    printf("8");
                }
                else if(b[8] < 1 ){
                    printf("9");
                }
                else if(b[8] < 1 && b[9] < 1){
                    printf("10");
                }
                else if(b[8] < 1 && b[9] < 1 && b[7] < 1 && b[10] < 1){
                    printf("Impossible");
                }
                break;
            }
        }
         if(k == 3){
            if(b[5] >= 1){
                printf("5");
                break;
            }
            else {
                if(b[6] >= 1){
                    printf("6");
                }
                else if(b[6] < 1){
                    printf("7");
                }
                else if(b[6] < 1 && b[7] < 1){
                    printf("8");
                }
                else if(b[6] < 1 && b[7] < 1 && b[8] < 1){
                    printf("9");
                }
                else if(b[6] < 1 && b[7] < 1 && b[8] < 1 && b[9] < 1){
                    printf("10");
                }
                else if(b[6] < 1 && b[7] < 1 && b[8] < 1 && b[9] < 1 && b[5] < 1 && b[10] < 1){
                    printf("Impossible");
                }
                break;
            }
        }
    }
}
}