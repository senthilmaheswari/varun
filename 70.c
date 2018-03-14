#include<stdio.h>
#include<conio.h>
int main(void)
{
int m,a,k;
printf("\n enter  the number");
scanf("%d",&m);
for(k=0;k<m;k++)
{
a=(pow(2,k));
if(a>m)
{
printf("\n %d is the nearest power of 2",a);
break;
}
}
return 0;
}
