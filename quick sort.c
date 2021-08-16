#include <stdio.h>

void quick (int x[],int lb,int ub)
{
  int j;
  if(lb>=ub)
    return ;
  else
  {
    j=partition(x,lb,ub);
    quick(x,lb,j-1);
    quick(x,j+1,ub);
  }  
}
int partition (int x[],int lb,int ub)
{
  int down=lb,up=ub,pivot=x[lb],temp,temp1;
  while(down<up)
  {
    while(x[down]<pivot && down<ub)
      down++;
    while(x[up]>pivot && up>lb)
      up--;
    if(down<up)
     {
       temp=x[down];
       x[down]=x[up];
       x[up]=temp;
     }
  } temp1=x[up];
    x[up]=pivot;
    pivot=temp1;
    return up;
  
}
int main()
{
  int n,x[n],i;
  printf("Enter no. of Elements:");
  scanf("%d",&n);
  printf("Enter Elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&x[i]);
  quick(x,0,n-1);
  printf("\nSorted Elements:\n");
  for(i=0;i<n;i++)
  printf("%d ",x[i]);
  return 0;
}
    