#include <stdio.h>
int main()
{
    int x,y,a,b,z=0;
    scanf("%d%d",&x,&y);
    while(y>=x)
    {

        x=x*3;
        y=y*2;
        z++;

    }

    printf("%d",z);


}
