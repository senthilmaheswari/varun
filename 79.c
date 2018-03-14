#include <stdio.h>

int main(void) {
	int a,b,c,i,d=0;
	scanf("%d\n%d",&a,&b);
	c=a*b;
	for(i=1;i<c;i++)
	{
		if(c/i==i)
		{
			d++;
		}
	}
	if(d==0)
		{
		printf("it is not a perfect square");
		}
		else
		{
			printf("it is a perfect square");
		}
	
	return 0;
}
