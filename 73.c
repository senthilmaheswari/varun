#include<stdio.h>
int main()
{
    int n,m,k;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the two values:");
    scanf("%d %d",&m,&k);
    if((m<n)&&(n<k))
    {
        printf("YES");
        
    }
    else
    {
        printf("NO");
    }
}
    

