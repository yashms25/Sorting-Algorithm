#include <stdio.h>

void sort(int x[],int n)
{
  int index,t;
  if(n>1)
  {
    index=getindex(x,n);
    t=x[n-1];
    x[n-1]=x[index];
    x[index]=t;
    sort(x,n-1);
  }
}
int getindex(int x[],int n)
{
  int max,index;
  max=x[0];
  index=0;
  for(int i=1;i<n;i++)
  {
    if(x[i]>max)
    {
      max=x[i];
      index=i;
     }
  }
  return index;
}

int main()
{
  int n,x[n],i;
  printf("Enter no. of Elements:");
  scanf("%d",&n);
  printf("Enter Elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&x[i]);
  sort(x,n);
  printf("\nSorted Elements:\n");
  for(i=0;i<n;i++)
  printf("%d ",x[i]);
  return 0;
}