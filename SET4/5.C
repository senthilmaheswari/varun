#include<stdio.h>
int main(void)
{
	int n,M,remainder,count=0;
	scanf("%d",&M);
	n=M;
	while(n!=0)
	{
		remainder=n%10;
		++count;
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
