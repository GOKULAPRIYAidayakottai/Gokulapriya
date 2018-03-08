
#include <stdio.h>
#include<math.h>
int main()
{
  int a[20],i=0,N,j,t,c=0;
printf("enter the number of elements");
scanf("%d",&N);
printf("enter array values");
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<N-1;i++)
{
    for(j=i;j<N;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            c++;
            if(c==1)
        {
            printf("%d",j);
        }
        }
        
    }

}
    return 0;
}



