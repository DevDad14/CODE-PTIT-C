#include<stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include<string.h>
=======

>>>>>>> 4e93da1 (sex)
=======

>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
int main(){
    char c[100000];
    scanf("%s",&c);
    int lenght = strlen(c);
<<<<<<< HEAD
<<<<<<< HEAD
    int temp = c[0];
    c[0] = c[lenght - 1];
    c[lenght - 1] = temp;
    int flag = 0;
    for(int i = 0 ; i < lenght ; i++){
        if(c[0] == '0'){
            flag = 1;
        }
    } 
    if(flag == 1){
    for(int i = 1 ; i < lenght ;i++){
        printf("%c",c[i]);
    }
    }
    else {
        for(int i = 0 ; i < lenght ; i++){
            printf("%c",c[i]);
        }
    }
=======
>>>>>>> 4e93da1 (sex)
=======
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
}