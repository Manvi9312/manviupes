#include<stdio.h>
int main(){
    int marks;
    printf("enter marks obtained: ");
    scanf("%d",&marks);

    if(marks<=100 && marks>=90){
        printf("grade A");
    }

    else if(marks<=89 && marks>=75){
        printf("grade B");
    }

    else if(marks<=74 && marks>=50){
        printf("grade C");
    }

    else{
        printf("grade F");
    }

    return 0;
}