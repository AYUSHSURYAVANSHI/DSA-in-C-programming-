# include<stdio.h>
int main()
{
    int i,sum;
    int avg;
    int a[10];
    printf("enter a number :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum = sum+a[i];

    }
    printf("average of the numbers\n");
    avg = sum/10;
    printf("%d",avg);
    
}