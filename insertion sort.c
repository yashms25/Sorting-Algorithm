#include <stdio.h>

void insertion(int x[],int n)
{
  int i,j,temp;
  for(i=1;i<=n-1;i++)
  {
    temp=x[i];
    for(j=i-1;j>=0&&temp<x[j];j--)
      x[j+1]=x[j];
    x[j+1]=temp;
  }
}
int main()
{
  int n,x[n],i;
  printf("Enter no. of elements:");
  scanf("%d",&n);
  printf("Enter elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&x[i]);
  insertion(x,n);
  printf("\nSorted Elements:\n");
  for(i=0;i<n;i++)
  printf("%d ",x[i]);
  return 0;
}