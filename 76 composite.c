#include<stdio.h>
int main()
{
    int i,k,f=0;
    printf("Enter a number:\n");
    scanf("%d",&k);
    for (i=2;i<=break/2;i++)
    {
        if(k%i==0)
        {
        f=1;
        break;
        }
        }
        if(f==0)
        printf("The given number is not composite\n");
        else
        printf("The given number is composite\n");
        return 0;
        }
      
