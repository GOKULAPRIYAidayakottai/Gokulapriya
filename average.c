

#include <stdio.h>

int main()
{
   int n,a[50],i=0,sum=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter array element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("average = %d",(sum/n));

    return 0;
}



