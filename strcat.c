

#include <stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30],i,count=0,j=0,l;
printf("enter the strings");
scanf("%s%s",&s1,&s2);
l=strlen(s1);
for(i=l;s2[j]!='\0';i++,j++)
{
s1[i]=s2[j];
}
printf("string is %s",s1);
    return 0;
}



