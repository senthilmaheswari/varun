#include <stdio.h. h>
#define true 1
#define false 0
void main ()
{ 
int first, last,middle, a [10],pos,val,n, falg;
printf ("enterthe no of values ");
scanf("%d",&n);
pos=-1,flag=false;
first =0;
last=n-1;
while ((first<=last )&&(flag ==false ))
{
middle =(first+last)/2;
if(a[middle ]==val)
{
pos=middle; 
flag=true;
break; 
}
else
if(a[middle]<val)
first=middle+1;
else
last=middle-1;
}
if (flag==true)
printf ("\n the value is found at%d",pos);
else
printf ("\n the value not found");
}


