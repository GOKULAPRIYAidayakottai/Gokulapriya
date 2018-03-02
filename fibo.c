

#include <stdio.h>
#include<string.h>
int main()
{
int f=0,s=1,n,i,temp;
scanf("%d",&n);
printf("FIBONACCI SERIES....");
printf("%d %d ",f,s);
for(i=2;i<=n;i++)
{
temp=f+s;
f=s;
s=temp;
printf("%d ",temp);
}
    return 0;
}



