#include<stdio.h>
int main()
{
    int a,b,c,d,e,x,y,z;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    x=(a*b)+(d*2);
    y=(a*c)+(e*2);
    if (x<y)
    {
        printf("First\n");
    }
    else if(x>y)
    {
        printf("Second\n");
    }
    else if(x==y)
    {
        printf("Friendship\n");
    }

}
