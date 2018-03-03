

#include <stdio.h>

int main()
{
    int n1,n2, original, remainder, result = 0,i,c=0;
    printf("enter the limit");

scanf("%d%d", &n1,&n2);
for(i=n1;i<=n2;i++)
{
    original=i;
while (original > 0)
{
remainder = original%10;
result += remainder*remainder*remainder;
original /= 10;
}
if(result == i)
{
c++;
}
if(c != 0)
{
printf("%d is an Armstrong number.",i);
}
result=0;
c=0;
}

    return 0;
}



