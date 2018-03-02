

#include <stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
char str[30];
int i=0,count=0;
  printf("enter the string");
  scanf("%s",&str);
while(str[i]!='\0')
{
if(!(isdigit(str[i]))&&!(isalnum(str[i])))
{
++count;
}
++i;
}

printf("no of special characters is %d ",count);
    return 0;
}



