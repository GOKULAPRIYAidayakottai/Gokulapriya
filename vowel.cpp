

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char str[30];
int count=0,i=0,vow=0;
printf("enter the string");
scanf("%s",&str);
count=strlen(str);
for(i=0;i<count;i++)
{
if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
{
vow++;
}
}
if(vow==0)
{
printf("no");
}
else
{
printf("yes");
}
    return 0;
}


