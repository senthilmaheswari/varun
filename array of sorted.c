#include <stdio.h>
void main()
{
int a[10],i, j, n, t; 
printf ("enter the no of values ");
scanf("%d",&n);
prinf( "enter the values");
for(i=0;i<n;i++)
{
scanf ("%d",&a [i]);
}
for(i=0;i <n-1;i++)
{
for (j=i+1;j <n;j++)
{
if (a[i]>a [j])
{
t=a [i];
a [i]=a[j];
a [j]=t;
}
}
printf (" sorted elements are:");
for(i=0;i <n;i++)
{
printf ("%d",a [i]);
}
}


