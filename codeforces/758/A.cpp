#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y[100],z=0,i,j,k,l=0,m,n;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
        if(z<y[i])
        {
            z=y[i];
        }
    }
     for(i=0;i<x;i++)
    {
        l+=z-y[i];
    }
    printf("%d",l);
}






