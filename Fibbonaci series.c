#include <stdio.h>
#include<conio.h>
void main ()
{
int x,y,z;
clscr();
printf(" \n enter the fibbonaci series  ");
scanf("%d",&n);
}
int fib(int n)
{
int x,y,z,i;
x=0,y=1;
printf("\n fibbonaci series \n");
for(i=0;i<n;i++)
{
z=x+y;
x=y;
y=z;
printf("\t %d",z);
}
}
