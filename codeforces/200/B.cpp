#include <stdio.h>

int main()
{
  int x,y,i,j=0;
  float z=0.0;
  scanf("%d",&x);
  for(i=0;i<x;i++)
  {
      scanf("%d",&y);
      j+=y;
  }
z=(double)j/x;
  printf("%.12f",z);


}
