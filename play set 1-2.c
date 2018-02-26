#include <stdio.h>

int main()
{
    int n,i,f;
 f=1;
    printf("\n enter the no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    
    }
    printf("\n %d",f);
}
