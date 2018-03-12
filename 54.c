#include <stdio.h>

int main()
{
    int n;
    printf("\n enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n %d",n);
    }
    else
    {
        printf("\n %d",n-1);
        
    }

    return 0;
}
