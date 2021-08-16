#include <stdio.h>
void mergesort(int x[],int lb,int ub)
{
  int mid;
  if(lb<ub)
  {
  mid=(lb+ub)/2;
  mergesort(x,lb,mid);
  mergesort(x,mid+1,ub);
  merge(x,lb,mid,ub);
  }
}

void merge(int x[],int lb,int mid,int ub)
{
 int i=lb,j=mid+1,k=0,temp[ub];
 while(i<=mid && j<=ub)
 {
   if (x[i]<x[j])
    temp[k++]=x[i++];
   else
    temp[k++]=x[j++];
 }
 while (i<=mid)
   temp[k++]=x[i++];
 while(j<=ub)
   temp[k++]=x[j++];
 for(i=lb,j=0;i<=ub;i++,j++)
   x[i]=temp[j];
}
int main()
{
  int n,x[n],i;
  printf("Enter no. of Elements:");
  scanf("%d",&n);
  printf("Enter Elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&x[i]);
  mergesort(x,0,n-1);
  printf("\nSorted Elements:\n");
  for(i=0;i<n;i++)
  printf("%d ",x[i]);
  return 0;
}
 