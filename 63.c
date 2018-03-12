#include <stdio.h>
#include<string.h>

int main()
{
 char a[13];
 int n,i,word=1;
 printf("\n enter the string:");
 scanf("%s", a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
     if(a[i]=='')
     {
         word=word+1;
         
     }
     printf("%d",word);
 }

    return 0;
}
