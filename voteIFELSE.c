#include<stdio.h>
int main(){
    int age;

    printf("enter age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("eligible to vote");
    }

    else{
        if(age<0){
            printf("invalid age");
        }
        else{
            printf("not eligible to vote");
        }
    }
    return 0;
}