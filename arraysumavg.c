#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},i,sum=0,avg;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("\n sum %daverage %d",sum,avg);
    return 0;
}
