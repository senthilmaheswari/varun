#include <stdio.h>
#include<conio.h>
void main ()
{
int a,b, c;
clscr();
printf(" \n enter the fibbonaci series  ");
scanf("%d",&n);
}
int fib(int n)
{
int a,b, c,i;
a=0,b=1;
printf("\n fibbonaci series \n");
for(i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("\t %d",c);
}
}
