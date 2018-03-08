

#include <stdio.h>
#include<math.h>
int main()
{
 char str[20],ch;
    int i,j,n1=0,n2=0,t;
  printf("enter the string");
  scanf("%s",&str);
  for(i=0;(str[i]!='/'&&str[i]!='%');i++)
  { 
    
          n1=(n1*10)+(str[i]-48);
 
  }  
  ch=str[i];

     
          for(j=i+1;str[j]!='\0';j++)
          {
            
              n2=(n2*10)+(str[j]-48);
          }
          printf("n1 = %d\nn2 = %d\noperator = %c",n1,n2,ch);

  switch(ch)
  {
      case '/':printf("\ndivision of two numbers=%d",(n1/n2));
               break;
      case '%':printf("\nmodulo division of two numbers=%d",(n1%n2));
               break;
      default:printf("\nonly '/' or '%' only can be perform");           
  }
    return 0;
}



