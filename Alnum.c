

#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char s[20];
int i;
printf("enter the string ");
scanf("%s",&s);
printf("\ndigit present in the given string");
for(i=0;s[i]!='\0';i++)
{
if(isdigit(s[i]))
{
printf("\t%d",s[i]-48);
}
    
}
    return 0;
}
