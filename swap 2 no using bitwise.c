#include<stdio.h>
void swap(int*,int*)
int main()
{
int m,n;
printf("\n enter the two number before swapping:");
swap(m,n);
printf("\n after swapping two numbers:");
scanf("%d%d",&m&n);
void swap(intx,inty)
{
*x=*x^*y;
*y=*y^*x;
*x=*x^*y;
}
}
