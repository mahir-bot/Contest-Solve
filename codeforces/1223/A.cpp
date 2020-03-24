#include <stdio.h>
int main()
{
   int x,y[100],z,i;
   scanf("%d",&x);
   for(i=0;i<x;i++)
   {
       scanf("%d",&y[i]);
   }

     for(i=0;i<x;i++)
     {
      if(y[i]%2==0)
       {
           if(y[i]/2<2)

               printf("%d\n",y[i]);

           else
            printf("0\n");
       }
       else
       {
               printf("1\n");

       }
     }
}
