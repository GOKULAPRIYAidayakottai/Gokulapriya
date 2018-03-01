#include <stdio.h>
#include<math.h>
int main()
{
  int n,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
{

if(pow(2,i)>=n)
{
printf(" nearest power of 2 is %.0f",pow(2,++i));
break;
}
}
    return 0;
}
