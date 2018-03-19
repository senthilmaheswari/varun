#include<stdio.h>
#include<string.h>
int main()
{
char m[20],k[20];
int n;
printf("enter the string\n");
scanf("%s",&m);
strcpy(k,m);
strrev(k);
c=strcmp(m,k);
if(n==0)
{
printf("given string is palindrome");
}
else
{
printf("given string is not a palindrome");
}
return 0;
}
