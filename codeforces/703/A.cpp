#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x,y,i,j,q[101][2],a=0,b=0,c=0;
  scanf("%d",&x);
  for(i=0;i<x;i++)
  {
      for(j=0;j<2;j++)
      {
          scanf("%d",&q[i][j]);
      }
      if(q[i][0]>q[i][1])
          {
             a++;
          }
          else if (q[i][0]<q[i][1])
          {
              b++;
          }
  }

  if(a>b)
  {
      printf("Mishka");
  }
  else if(a<b)
  {
      printf("Chris");
  }
  else if(a==b)
  {
      printf("Friendship is magic!^^");
  }
}
