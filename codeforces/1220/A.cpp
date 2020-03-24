#include <stdio.h>
int main()
{
    int x,i,j=0,k=0;
    char z[1000000];
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%s",z);
        for(i=0;i<x;i++)
        {
            if(z[i]=='n')
            {
                z[i]=1;
                printf("%d ",z[i]);

            }

        }
        for(i=0;i<x;i++)
        {
            if(z[i]=='z')
            {
                z[i]=0;
               printf("%d ",z[i]);
            }
        }
    }
}
