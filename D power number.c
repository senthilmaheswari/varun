#include<stdio.h>
void main()
{
int base,exponent;
long result=1;
printf("enter the base no:");
scanf("%d",&base);
printf("enter the exponent \n:");
scanf("%d",exponent);
if (exponent!=0)
result*=base;
--exponent;
else
break;
}
