

#include <stdio.h>
#include<string.h>
int main()
{
  char n[30],i,count=0,l;
printf("enter the number");
scanf("%s",&n);
l=strlen(n);
for(i=0;n[i]!='\0';i++)
{
if((n[i]=='0')||(n[i]=='1'))
{
count++;
}
}
if(count==l)
{
printf("the number is binary");
}
else
{
printf("the number is not a binary");
}
    return 0;
}



