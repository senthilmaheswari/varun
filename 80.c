#include <stdio.h>

int main(void) {
	char n[45];
	int l,k;
	scanf("%s",n);
	l=strlen(n);
	for(k=0;k<l;k++)
	{
	
	if((n[k]%2)==1)
	
		printf("\t%c",n[k]);
	}
	return 0;
}
