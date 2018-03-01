#include <stdio.h>
#include<math.h>
int main()
{
    int n,r,i,k=0,a[20];
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        
        r=n%10;
       
        if((r%2)!=0)
        {
            a[k]=r;
            k++;
        }
        n=n/10;
    }
    
    for(i=k-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}



