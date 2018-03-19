#include<stdio.h>
int main(void)
{
	int j,k,c,lcm;
	scanf("%d%d",&j,&k);
	c=gcd(j,k);
	lcm=(j*k)/c;
	printf("%d",lcm);
	return 0;
}
int gcd(int m,int n)
{
	if(m==0)
	return n;
	if(n==0)
	return m;
else
	gcd(n,m%n);
	}
