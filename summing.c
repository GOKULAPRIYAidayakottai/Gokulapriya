

#include <stdio.h>
#include<math.h>
int main()
{
    int a[30],n,i,sum=0;
printf("enter the limit");
scanf("%d",&n);
printf("array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum = %d",sum);

    return 0;
}



