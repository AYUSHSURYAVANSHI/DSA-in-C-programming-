#include<stdio.h>
int main()
{
int arr[50];
int i,search,size,flag=0;

printf("enter a size of array:\n");
scanf("%d",&size);

printf("enter a element in array:\n");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter a element to search:\n");
scanf("%d",&search);

printf("element after searching:\n");
for(i=0;i<size;i++)
{ 
    if(arr[i]==search)
    {
        printf("element is found:\n");
        flag=1;
}
   }   if(flag==0)
    {
        printf("element is not found:\n");
    }
return 0;
}