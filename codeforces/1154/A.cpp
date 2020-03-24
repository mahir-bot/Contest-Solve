#include <stdio.h>
int main()
{
    int a,b,c=0,d,x[4],y,z=0,high,mid,low,lowest,i;

   for(i=0;i<4;i++)
   {
       scanf("%d",&x[i]);
       if(z<x[i])
       {
           z=x[i];
       }
   }
   for(i=0;i<4;i++)
   {
       b=z-x[i];
       if(b==0)
       {
           continue;
       }
       else
       {
           printf("%d\n",b);
       }

   }




}
