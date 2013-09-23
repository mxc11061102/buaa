#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,j,x,sum=0,n,max=-9999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
      for(j=n-1;j>=i;j--)
      {
      sum=0;
      for(x=i;x<=j;x++)
      sum=sum+a[x];       
      if (max<sum) max=sum;
      }
    printf("%d",max);
    system("pause");
}
