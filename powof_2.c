

#include <stdio.h>

int main()
{
   int n,i=1,c=0;
printf("enter the number ");
scanf("%d",&n);
if(n==0)
{
printf("yes");
}
else
{
while(i<(n/2))
{
if(pow(2,i)==n)
{
c++;
}
i++;
}

if(c!=0)
{
printf("yes");
}
else
{
printf("no");
}
}

    return 0;
}



