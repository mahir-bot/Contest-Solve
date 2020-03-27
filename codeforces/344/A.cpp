#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,arr[100000],z=0,i,j,k;
  scanf("%d",&x);
  for(i=0;i<x;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<x;i++)
  {
      if(arr[i]!=arr[i+1])
      {
         z++;

      }
      else
        continue;
  }

  printf("%d",z);


}
