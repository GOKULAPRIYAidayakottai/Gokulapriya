#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
   int n,i=0,l=0,k=0;
printf("enter the string");
scanf("%s",&a);
printf("enter N value");
scanf("%d",&n);
l=strlen(a);

for(i=--l;n>0;i--,n--)
{
    printf("%c\t",a[i]);
}

    return 0;
}
