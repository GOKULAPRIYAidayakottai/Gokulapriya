#include <stdio.h>

int main()
{
   
    int s,e,i;
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
if((i%2)==0)
{
printf("%d\t",i);
}
}
    return 0;
}
