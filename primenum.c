#include<stdio.h>
#include<math.h>
int find_gcd(int n , int m){
    if(n == 0 || m == 0){
        return n + m;
    }
    while(n != m){
        if(n > m){
            n = n - m;
        }
        else if(m > n){
            m = m - n;
        }
    }
    return n;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",find_gcd(a,b));
    }

}