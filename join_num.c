

#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a,b,c=0,i=0,sum=0,j,r,arr[10];
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    sum=a;
    while(a>0)
    {
        a=a/10;
        c++;
    }
    while(b>0)
    {
        r=b%10;
        arr[i]=r;
        i++;
        b=b/10;
        
    }
    j=i-1;
    for(i=0;i<c;i++,j--)
    {
        sum=((sum*10)+arr[j]);
    }
    printf("number = %d",sum);
    
    return 0;
}


