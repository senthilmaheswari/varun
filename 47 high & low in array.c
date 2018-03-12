#include <stdio.h>

int main()
{
    int a[15],size,large,small,i;
    printf("\n enter the size of the array:");
    scanf("%d",&size);
    printf("\n enter the elements in the arrray:");
    scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
        printf("\n largest no in the array %d",large);
        small=a[0];
        for(i=1;i<size;i++)
        {
            if(small>a[i])
            {
                small=a[i];
        }
        printf("\n smallest element %d",small);
    

    return 0;
}
}}
