#include<stdio.h>
void swap(int*,int*)
int main()
{
int a,b;
printf("\n enter the two number before swapping:");
swap(a,b);
printf("\n after swapping two numbers:");
scanf("%d%d",&a&b);
void swap(intx,inty)
{
*x=*x^*y;
*y=*y^*x;
*x=*x^*y;
}
}
