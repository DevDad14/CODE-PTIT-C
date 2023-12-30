#include<stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m]={0};
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n ;j++){
            scanf("%d",a[i][j]);
            a[i][j + 3] = a[i][j];
        }
    }
    int det = 0;
    for(int d = 0 ; d < n ; d++){
        
    }
}