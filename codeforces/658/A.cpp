#include <stdio.h>
#include <stdlib.h>
long a(long b,long c,long d)
{
    return (b >= (c*d)) ? (b-c*d) : 0;
}
int main()
{
  int x,y,z[100],k[100],i,ltime=0,rtime=0,l=0,r=0;
  scanf("%d%d",&x,&y);
  for(i=0;i<x;i++)
  {
      scanf("%d",&z[i]);
  }
  for(i=0;i<x;i++)
  {
      scanf("%d",&k[i]);
  }

  for(i=0;i<x;i++)
  {
      ltime+=k[i];
      rtime+=k[x-1-i];
      l+=a(z[i],ltime,y);
      r+=a(z[x-1-i],rtime,y);

  }
  if(l==r)
  {
      printf("Tie");
  }
  else if (l>r)
  {
      printf("Limak");
  }
  else if(l<r)
  {
      printf("Radewoosh");
  }
}
