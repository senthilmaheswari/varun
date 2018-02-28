#include<stdio.h>
void swap(int *,int*)
int main()
{
int m,n;
printf("\n enter the two no before swapping:");
scanf("%d%d",&m&n)
swap(m,n);
printf("\n after swapping two numbers are:");
 scanf("%d%d",&m&n);
  void swap(int x,int y)
  {
    *x=*x^*y;
    *y=*y^*x;
    *x=*x^*y;
  }
}
