
#include <stdio.h>
#include<string.h>
int main()
{
    char ch[30];
int l,i;
printf("enter the string ");
scanf("%[^\n]s",&ch);
l=strlen(ch);
ch[0]=toupper(ch[0]);
for(i=1;i<l;i++)
{
if(ch[i]==32)
{
ch[i+1]=toupper(ch[i+1]);
}
}
printf("the string is = %s",ch);

    return 0;
}


