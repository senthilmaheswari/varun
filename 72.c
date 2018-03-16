#include <stdio.h>
#include<string.h>

int main(void) {
	char a[56];
	int l,i,count=0;
	printf("enter the string");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{

	
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{
		count=count+1;
	}
	}
	if(count>0)
	printf("string has vowel");
	else
	{
		printf("no vowel");
	}
	
	
	return 0;
}
