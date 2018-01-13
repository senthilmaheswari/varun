#include<stdio.h>
void main ()
{
int n,rem, n1, num=0;
printf ("enter the positive number:");
scanf ("%d",&n);
n1=n;
while (n1!=0)
{
rem=n1%10;
num=num+rem *rem*rem;
}
if (num==n)
{
printf ("%d is an Armstrong  no");
else 
printf ("%d is not an Armstrong no");
}
}


