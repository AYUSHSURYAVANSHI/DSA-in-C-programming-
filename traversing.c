#include<stdio.h> 
int main()
{    
    int n;
    int arr[n];
    printf("enter the size of array : \n");
    scanf("%d",n);
    printf("Enter the elemelt in array : \n");
    for(int i=0; i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("Element of array : \n");

    for(int i=0; i<n;i++){
        printf("%d",arr[i]);
    }


return 0;
}