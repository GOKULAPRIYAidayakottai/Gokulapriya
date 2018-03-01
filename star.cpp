

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[30];
int count=0,i=0,n;
printf("enter the string");
scanf("%s",&str);
count=strlen(str);
if((count%2)==0)
{
n=count/2;
str[n]='*';
str[--n]='*';
}
else
{
n=count/2;
str[n]='*';
}
printf("%s",str);

    return 0;
}

