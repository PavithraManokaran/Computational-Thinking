#include <stdio.h>
int main()
{
int i, n,first=0,next=1,sum;
printf("Enter series range:");
scanf("%d",&n);
printf("Fibonacci number value:");
for(i=0;i<n;i++)
{
sum=first+next;
first=next;
next=sum;
}
printf("\n%d",first);
return 0;
}
