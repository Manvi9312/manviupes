# include <stdio.h>
void main(){
    int sum,num1,num2,num3,num4;
    int num=1234;
    num1=num%10;
    num=num/10;
    num2=num%10;
    num=num/10;
    num3=num%10;
    num=num/10;
    num4=num%10;
   
    sum= num1+num2+num3+num4;
    printf("sum of digits= %d", sum);
}