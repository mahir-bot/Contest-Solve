#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z[1000][3],i,j,k=0,l=0,m=0,n=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&z[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<3;j++)
        {
            if(z[i][0]==1)
            {
                k+=z[i][1];
                l+=z[i][2];
            }
            else if(z[i][0]==2)
            {
                m+=z[i][1];
                n+=z[i][2];
            }
        }
    }
    if(k>=l)
    {
        printf("LIVE\n");
    }

    else if(l>k)
    {
        printf("DEAD\n");
    }

    if(m>=n)
    {
        printf("LIVE\n");
    }
    else if(n>m)
    {
        printf("DEAD\n");
    }
}






