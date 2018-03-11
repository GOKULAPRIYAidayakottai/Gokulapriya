

#include <stdio.h>

int main()
{
    int n,a,s[10],i=0,r,l,j;
    printf("enter the number");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        r=a%10;
        s[i]=r;
        a=a/10;
        i++;
    }
    l=i-1;
    for(i=0;i<l;i++)
    {
        for(j=i;j<=l;j++)
        {
            if(s[i]>s[j])
            {
                r=s[i];
                s[i]=s[j];
                s[j]=i;
            }
        }
    }
    printf("number in lexicographica order = ");
    for(i=0;i<=l;i++)
    {
       printf("%d",s[i]);
    }
    

    return 0;
}


