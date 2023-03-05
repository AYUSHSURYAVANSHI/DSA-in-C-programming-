#include<stdio.h>
int main()
{
int arr[20] = {18,20,38,44,22};
int x,pos,n = 5;
int i;
printf("array element before insertion \n");
for(i= 0; i<n; i++)
{
    printf("%d",arr[i]);
}
x = 50;
pos = 4;
n++;

for(i = n-1; i >= pos; i--)
{
    arr[i] = arr[i-1];
}
arr[pos-1] = x;
printf("array element after insertion \n");
for(i=0; i<n; i++)
{
    printf("%d\n",arr[i]);
}
return 0;
}