#include <stdio.h>
#include <stdlib.h>

int main()
{
  long long int x,y=0,z=0,a=0,b=0,c=0,d=0;
    scanf("%lld",&x);
    if(x>4)
        y=x/5;
        x=x%5;
    if(x%4==0)
        z=x/4;
        x=x%4;
    if(x%3==0)
        a=x/3;
        x=x%3;
    if(x%2==0)
        b=x/2;
        c=x%2;

        d=a+b+c+y+z;
        printf("%lld",d);






}
