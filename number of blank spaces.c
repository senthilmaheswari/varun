#include <stdio.h >
main()
{
char string[200],ch;
int count=0,i=0;
printf("Enter the string \n");
while(string [i]!='\0')
{
if (string[i]=='')
count++;
i++;
}
printf("number of blank spacesin the string %d",count);
}
