

#include <stdio.h>

int main()
{
   
  int num,pow,i,mul;
printf("enter num and power");
scanf("%d",&num);
scanf("%d",&pow);
mul=1;
for(i=1;i<=pow;i++)
{
mul=mul*num;
}
printf("answer = %d",mul);
return 0;
}
    

