#include <stdio.h>
#include<conio.h>
main()
{
char str[200];
int i=0;count =0;
printf("enter the string\n");
while(str[i]!='\0')
{
if(str[i]=='')
count++;
}
printf("number of words in the string %d\n",count+1);
}
