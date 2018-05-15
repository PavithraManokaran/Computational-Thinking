#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},i,t;
    for(i=0;i<10;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i+1];
            a[i+1]=a[i];
            a[i]=t;
        }
    }
    
    printf("\n %d ",a[i]);
    printf("\n %d",a[0]);
    return 0;
}
