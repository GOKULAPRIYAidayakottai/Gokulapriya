

#include <stdio.h>
#include<string.h>
int main()
{
    int a[20],i=0,max,temp;
printf("enter array elements");

  for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
{
temp=a[i];
a[i]=max;
max=temp;
}
}
printf("maximum element is %d",max);
    return 0;
}



