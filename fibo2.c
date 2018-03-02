

#include <stdio.h>
#include<string.h>
int main()
{
    int f=0,s=1,N,i,temp=0;
scanf("%d",&N);
printf("FIBONACCI SERIES....");
printf("%d %d ",f,s);
for(i=2;i<=N;i++)
{
temp=f+s;
printf("%d ",temp);
f=s;
s=temp;

}
    return 0;
}



