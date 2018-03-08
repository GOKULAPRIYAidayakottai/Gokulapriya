

#include <stdio.h>
#include<math.h>
int main()
{
    int a[30],n,k,i;
printf("enter the no of elements and k-th element want to be print");
scanf("%d%d",&n,&k);
printf("array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("k-th element is: %d",a[--k]);
    return 0;
}



