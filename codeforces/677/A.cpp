#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x,y,j,i,l,k=0,z;
  scanf("%d%d",&x,&y);
  for(i=0;i<x;i++)
  {
      scanf("%d",&z);
      if(z>y)
      {
         k+=2;
      }
      else
        k++;
  }
  printf("%d",k);
}
