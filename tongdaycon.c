#include<stdio.h>
void sort(int n,int a[]){
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    sort(n,a);
    int sum = 0;
    for(int i = 0 ; i < k ; i++){
        sum+=i;
    }
    printf("%d",sum);
}