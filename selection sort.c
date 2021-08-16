#include <stdio.h>
void selection(int x[],int n)
{
  int max,temp,i,j;
  for(i=n-1;i>0;i--)
  {
    max=0;
    for(j=1;j<=i;j++)
    {
      if(x[j]>x[max])
        max=j;
    }
    temp=x[max];
    x[max]=x[i];
    x[i]=temp;
  }
}

int main()
{
  int n,x[n],i;
  printf("Enter no. of Elements:");
  scanf("%d",&n);
  printf("Enter Elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&x[i]);
  selection(x,n);
  printf("\nSorted Elements:\n");
  for(i=0;i<n;i++)
  printf("%d ",x[i]);
  return 0;
}