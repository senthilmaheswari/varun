#include<stdio.h>
void main()
{
int a[10],i, temp,j;
printf("\n enter the elements:");
for(i=0;i<=9;i++)
{
scanf("%d", &a[i]);
for(i=0;i<=9;i++)
{
for(j=i+1;j<=9;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
printf("\n %d", a[i]);
}
if(a[i]>a[j])
{
    a[i]=temp;
    a[i]=a[j];
    a[j]=temp;
}
    printf("\n %d", a[j]);
}
}
}
return  0;
}


