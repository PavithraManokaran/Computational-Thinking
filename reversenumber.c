#include<stdio.h>
#include<string.h>
int main(void)
{
char num[15];
int i,l;
printf("\n Enter the number");
scanf("\n %s",num);
l=strlen(num);
printf("\n %d",l);
printf("\n Entered number: %s",num);
printf("\n Reversed number: \n");
for(i=l;i>=0;i--)
{
printf("%c",num[i]);
}
return 0;
}
