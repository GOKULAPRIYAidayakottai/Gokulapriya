

#include <stdio.h>

int main()
{
   int n,k,i,sum=0,a[10];
   printf("enter n and k : " );
   scanf("%d%d",&n,&k);
   printf("enter array elements :");
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<k;i++)
   {
       sum=sum+a[i];
   }
   printf("sum= %d",sum);
    return 0;
}



