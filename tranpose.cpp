<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            b[i][j] = a[j][i];
        }
    }
    for(int i = 0 ; i < m ; i++){
        for(int  j = 0 ; j < n ; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
=======
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            b[i][j] = a[j][i];
        }
    }
    for(int i = 0 ; i < m ; i++){
        for(int  j = 0 ; j < n ; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
>>>>>>> 676aa6e (Add files via upload)
=======
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            b[i][j] = a[j][i];
        }
    }
    for(int i = 0 ; i < m ; i++){
        for(int  j = 0 ; j < n ; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
}