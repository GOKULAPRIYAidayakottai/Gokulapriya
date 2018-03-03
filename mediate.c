

#include <stdio.h>

int main()
{
    int n,arr[1000],i=0,j,temp,mid;
printf("enter array limit");
scanf("%d",&n);
if(!(n<=1000)&&(n>=1))
{
printf("limit should with in 1 to 1000");
}
else
{
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<n-1;j++)
    {
for(i=j;i<n;i++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
mid=n/2;
printf("middle element is %d",arr[mid]);
}
    
    return 0;
}



