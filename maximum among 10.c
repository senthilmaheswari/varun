#include<stdio.h>
void main()
{
int a[10],i,y;
printf("\n enter the Nelements:");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
for(i=0;i<=9;i++)
{
for(y=i+1;y<=9;y++)
{
if(a[i]<a[y])
{
a[i]=a[y];
a[y]=temp;
printf("enter the maximum number :");
  printf("%d",a[y]);
}


