#include<stdio.h>
int main(){
    int a[10][10], b[10][10], result[10][10];
    int r1,c1,r2,c2;
    int i,j,k;

    printf("enter rows of first matrix: ");
    scanf("%d",&r1);
    printf("enter columns of first matrix: ");
    scanf("%d",&c1);

    printf("enter rows of second matix: ");
    scanf("%d",&r2);
    printf("enter columns of second matrix: ");
    scanf("%d",&c2);

    if(c1!=r2){
        printf("matrix multiplication not possible\n");
        return 0;
    }

    printf("enter elments of first matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elments of second matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }


    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            result[i][j]=0;
            for(k=0;k<c1;k++){
                result[i][j]+=a[j][k]*b[k][j];
            }
        }
    }

    printf("\nResult matrix: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}