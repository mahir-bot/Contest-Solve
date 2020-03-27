#include <stdio.h>
#include <stdlib.h>

int main()
{
 long long int arr[201][201],i,j,k=0,x,y;
 scanf("%d%d",&x,&y);
 for(i=0;i<x;i++)
 {
     for(j=0;j<y*2;j++)
     {
         scanf("%d",&arr[i][j]);
     }
 }
 for(i=0;i<x;i++)
 {
     for(j=1;j<y*2;j+=2)
     {
         if(arr[i][j]!=0 || arr[i][j-1]!=0)
         {
             k++;

         }

     }
 }
         printf("%d",k);
}
