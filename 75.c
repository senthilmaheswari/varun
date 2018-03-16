#include<stdio.h>
int main()
{
	char n[100];
	int l,halflen,halflength,i;
	printf("enter the string");
	scanf("%s",&n);
	l=strlen(n);
		if(l%2!=0)
		{
			halflength=l/2;
			for(i=0;i<l;i++)
			{
				n[halflength]='*';
			}
		}
		else
		{
			halflength=l/2;
			halflen=halflength-1;
			for(i=0;i<l;i++)
			{
			n[halflength]='*';
			n[halflen]='*';
			}
		
		}
		printf("%s",n);
		return 0;
		
	}
	
