
#include <stdio.h>
#include<math.h>
int main()
{
   int n,i,count=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((n%i)==0)
{
count++;
}
}
if((n==2)||(n==3))
{
 printf("no,not a composite");
}   

else if(count==0)
{
printf("no,not a composite");
}
else
{
printf("yes, composite");
}
    return 0;
}



