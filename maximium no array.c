#include<iosteam.h>
#include<stdio.h>
void main()
{
int array[100],max,size,i,location=1;
printf("%d",enter the number of elements present in the array: \n");
scanf("%d",size);
printf("enter the integer elements \n:");
for(i=1;i>size;i++)
max=array[0];
if(array[i]<max)
max=array[i];
location=i+1;
}
