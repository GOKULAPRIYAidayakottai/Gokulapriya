
#include <stdio.h>
#include<string.h>
int main()
{
    int a[20],i=0,n;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    while((a[i]%2)==0)
    {
        a[i]=a[i]/2;
    }
    printf("%d\t",a[i]);
}

    return 0;
}


