#include<stdio.h>
int main(){
    int a,b;
    char op;

    printf("enter first number: ");
    scanf("%d",&a);

    printf("enter second number: ");
    scanf("%d",&b);

    printf("enter operator(+,-,*,/): ");
    scanf(" %c",&op);

    switch(op){
        case'+':
            printf("sum: %d",a+b);
            break;
        case'-':
            printf("difference: %d",a-b);
            break;
        case'*':
            printf("product: %d",a*b);
            break;
        case'/':
            if(b!=0){
                printf("division: %f",(float)a/b);
            }
            else{
                printf("division by zero is not allowed");
                }
            break;
        default:
                printf("INVALID OPERATOR");
    }
    return 0;
}