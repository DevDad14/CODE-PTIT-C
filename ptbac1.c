#include<stdio.h>

int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    float x;
    if(a == 0 && b != 0){
        printf("Vo nghiem");
    }
    else if(a == 0 || b == 0){
        printf("Vo so nghiem");
    }
    else if(a != 0){
        x = -b / a;
        printf("%.2f",x);
    }
}