# include<stdio.h>
void main(){
    int length,width,perimeter,area;

    printf("enter length of rectangle: ");
    scanf("%d",&length);
    
    printf("enter width of rectangle:");
    scanf("%d",&width);
    
    perimeter=2*(length+width);
    area= length*width;
    
    printf("perimeter of recatngle is:%d\n",perimeter);
    printf("area of rectangle:%d",area);
}