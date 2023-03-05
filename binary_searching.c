#include<stdio.h>
int output(int arr[], int size){
   for (int i=0; i< size; i++)
   {
    printf("%d",arr[i]);
   }
return 0;
}

int binarysearching(int arr[], int size, int key){
    int start = 0, end = size-1,pos;
    pos = key-1;
    int mid=(start+ end)/2;
    printf("mid=%d",mid);

    int i;

    while(start<=end)
    {
       if(mid==pos){ 
        return arr[mid];
       }
       if(key<pos){
        end=pos-i;
       }
       else{
       start = mid+1;
       }
       mid = start +(end-start)/2;
       }
    return -1;
    }

int main()
{
    int size=7,key=6;
    int arr[size];
    printf("enter the element in array :\n");
        for(int i = 0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("%d\n",output(arr,size));
    int b = binarysearching(arr,7,6);

    printf("data = %d ,pos = %d",b,key);
    return 0;
} 
