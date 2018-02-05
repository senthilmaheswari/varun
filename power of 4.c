#include<stdio.h>
int main()
{
int n;
printf("\n enter the number:");
scanf("%d",&n);
if(n&(n-1)==0)
{
printf("\n it is a power of 2");
}
else
{
printf("\n it is not a power of 2");
}
}
