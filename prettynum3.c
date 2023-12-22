<<<<<<< HEAD
#include<stdio.h>
int ispalindorme(int n){
    int original_num = n;
    int reversed_num = 0;
    while(n > 0){
        int digit = n % 10;
        reversed_num = reversed_num * 10 + digit;
        n/=10;
    }
    return original_num == reversed_num;
}
int iscontain6(int n){
    while(n > 0){
        if(n % 10 == 6){
            return 1;
        }
        n/=10;
    }
    return 0;
}
int sum_of_digit(int n){
    if(n % 10 == 8){
        return 1;
    }
    return 0;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a < b){
    for(int i = a ; i <= b ; i++){
        int temp = i;
        int sum = 0;
        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }
        if(ispalindorme(i) && iscontain6(i)&& sum_of_digit(sum)){
            printf("%d ",i);
        }
    }
    }
    else if(a > b){
        for(int i = b ; i <= a ; i++){
            int temp2 = i;
            int sum = 0;
            while(temp2 > 0){
                sum += temp2 % 10;
                temp2 /= 10;
            }
            if(ispalindorme(i) && iscontain6(i) && sum_of_digit(sum)){
                printf("%d ",i);
            }
        }
    }
=======
#include<stdio.h>
int ispalindorme(int n){
    int original_num = n;
    int reversed_num = 0;
    while(n > 0){
        int digit = n % 10;
        reversed_num = reversed_num * 10 + digit;
        n/=10;
    }
    return original_num == reversed_num;
}
int iscontain6(int n){
    while(n > 0){
        if(n % 10 == 6){
            return 1;
        }
        n/=10;
    }
    return 0;
}
int sum_of_digit(int n){
    if(n % 10 == 8){
        return 1;
    }
    return 0;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a < b){
    for(int i = a ; i <= b ; i++){
        int temp = i;
        int sum = 0;
        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }
        if(ispalindorme(i) && iscontain6(i)&& sum_of_digit(sum)){
            printf("%d ",i);
        }
    }
    }
    else if(a > b){
        for(int i = b ; i <= a ; i++){
            int temp2 = i;
            int sum = 0;
            while(temp2 > 0){
                sum += temp2 % 10;
                temp2 /= 10;
            }
            if(ispalindorme(i) && iscontain6(i) && sum_of_digit(sum)){
                printf("%d ",i);
            }
        }
    }
>>>>>>> 676aa6e (Add files via upload)
}