#include<stdio.h>
void swap(int *,int*)
int main()
{
int a,b;
printf("\n enter the two no before swapping:");
scanf("%d%d",&a&b)
swap(a,b);
printf("\n after swapping two numbers are:");
 scanf("%d%d",&a&b);
  void swap(int x,int y)
  {
    *x=*x^*y;
    *y=*y^*x;
    *x=*x^*y;
  }
}
