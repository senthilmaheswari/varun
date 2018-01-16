#include<stdio.h>
#include  <string.h>
void main()
{
int i;
char a [10]="noon";
char b [10];
printf ("enter the string");
scanf ("%s",a);
strcpy (b,a);
strev (b,a);
i=strcmp(a,b);
if (i=0)
printf ("this is palindrome ");
else
printf ("this is not palindrome ");
}
