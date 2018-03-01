

#include <stdio.h>
#include<string.h>
int main()
{
  char str[30];
int count,i;
printf("enter the string");
scanf("%[^\n]%*c",&str);
for(i=0;str[i]!='\0';i++)
{
  if(str[i]==32)
  {
count++;
  }
}
printf("number of words in a sentence is %d",++count);
    return 0;
}



