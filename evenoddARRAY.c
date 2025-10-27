#include<stdio.h>

int evenodd(int arr[], int n){
    int even=0; int odd=0;
    for (int i=0; i<n; i++){
        if (arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("total even numbers: %d\n",even);
    printf("total odd numbers: %d\n",odd);
}

int main(){
    int n;
    printf("enter number of elments in array: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d numbers: ",n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    evenodd(arr,n);
    return 0;
}