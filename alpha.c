#include<stdio.h>
void main()
{
char c;
scanf("%c",&c);
if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
     {
     printf("%c is an alphabet",c);
    }
    else
    {
        printf("%c is not an alphabet",c);
        }
 }       
