#include<stdio.h>
int main()
{
int arr[100];
int i , size, pos;
// input size & element in an array 
printf("enter size of the array:\n");
scanf("%d",&size);
printf("enter a element in array:\n");
for(i=0; i<size; i++)
{
  scanf("%d",&arr[i]);
}
// input element position to delete 

printf("enter the element pos to delete :\n");
scanf("%d",& pos);
// invalid delete position 
if(pos<0 || pos>size)
{
    printf("invalid position ! please enter postion from 1 to %d",size);
}
// copy next element to currect element 
for(i= pos+1;i<size-1;i++)
{
    arr[i]= arr[i+1];
}
// decrement size by 1
size--;
// print array after deletion 
for (i=0;i<size; i++)
{
    printf("%d\t",arr[i]);
}
return 0;
}