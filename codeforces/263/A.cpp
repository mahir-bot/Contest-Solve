#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x[5][5],y=0,z=0,i,j,k=0,l=0,m=0;
  for(i=0;i<5;i++)
  {
      for(j=0;j<5;j++)
      {
          scanf("%d",&x[i][j]);
         if(x[i][j] == 1)
          {
             y=i;
             z=j;

          }

          }
      }


 abs(m=abs(y-2)+abs(z-2));


  printf("%d",m);
}
