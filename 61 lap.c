#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int i,m;
    printf("\n enterthe string:");
    scanf("%s",a);
    printf("\n enter the number of letters do u want:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        b[i]=a[i];
    
        
    }
    printf("\n %s",b);
}
