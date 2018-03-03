

#include <stdio.h>

int main()
{
   char c;
   printf("enter the character: ");
   scanf("%c",&c);
   if(!isdigit(c))
   {
   if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
   {
       printf("vowel");
   }
   else
   {
       printf("consonant");
   }
   }
   else
   {
       printf("input is not a character");
   }
    return 0;
}



