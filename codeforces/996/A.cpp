#include <stdio.h>
int main()
{
    int i,j,k,l,m,x,y,z=0,a=0,b=0,c=0,d=0,e=0;
    scanf("%d",&x);
    i=100;
    j=20;
    k=10;
    l=5;
    m=1;

    if(x>=i)
    {
        a=x/i;

    }x=x%i;
    if(x>=j)
    {
        b=x/j;

    }x=x%j;
    if(x>=k)
    {
        c=x/k;

    }x=x%k;
    if(x>=l)
    {
        d=x/l;

    }x=x%l;
    if(x>=m)
        {
             e=x/m;
        }




    z=a+b+c+d+e;
    printf("%d\n",z);



}
