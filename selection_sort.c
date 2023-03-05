#include<stdio.h>
int main()
{
    int arr[50];
    int size,swap,i,j;
    int pos;
printf("enter a size of array\n");
    scanf("%d",&size);   
printf("enter a element in array\n");
    for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<size-1;i++)
{
    pos = i; 
    for(j=i+1;j<size;j++)
    {
        if(arr[j]<arr[pos])
           pos = j;
            if(pos != i)
            {
                swap = arr[i];
                arr[i] = arr[pos];
                arr[pos] = swap;
            }
    } 
}
printf("shorted list of array\n");
for(i=0;i<size;i++)
{
    printf("%d\n",arr[i]);
}
return 0;
}
