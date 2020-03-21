#include <stdio.h>
int main()
{
    int i,x,a=0,b=0,c=0,d=0,e=0;
    long long int z=0;
    char q[100];

    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%s",q);

        if(q[0]=='T')
        {
            a++;
        }
        else if(q[0]=='C')
        {
            b++;
        }
         else if(q[0]=='O')
        {
           c++;
        }
         else if(q[0]=='D')
        {
            d++;
        }
         else if(q[0]=='I')
        {
            e++;
        }

    }


    z=(a*4)+(b*6)+(c*8)+(d*12)+(e*20);
    printf("%d\n",z);



}
