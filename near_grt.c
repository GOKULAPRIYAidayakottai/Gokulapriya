#include <stdio.h>

int main()
{
   int n;
printf("enter the number");
scanf("%d",&n);
if((n%10)==0)
{
printf("%d is a nearset greater multiple of 10",n+10);
}
else
{
do
{
n++;
}while((n%10)!=0);
printf("%d is a nearset greater multiple of 10",n);
}

    return 0;
}


