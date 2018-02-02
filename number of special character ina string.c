include<stdio.h>
int main()
{
int i,count=0,c=0;
char a[100];
printf("ENTER THE CHARACTER\n");
scanf("%c",&a[i]);
for(i=0;a[i]!=0;i++)
{
if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z'))||((a[i]>='0')&&(a[i]<='9')))
 count=count;
 else
 c=++c;
}
 printf("the special characters including spaces are %d",c);
 
 return 0;
 }
 
