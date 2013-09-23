#include <stdio.h>
int main()
{
  int dp[100]={0};
  int a[100]={0};
  int num,max;
  int i,j,k;
  scanf("%d",&num);
  max=-9999;
  for (i=1;i<=num;i++)
  {
    scanf("%d",&a[i]);
    dp[i]=a[i]+dp[i-1];
    if (max<dp[i]) max=dp[i];
    if (dp[i]<0) dp[i]=0;
  }
  printf("%d\n",max);
}

