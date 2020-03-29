#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j=0,k,x,y=0,z=0;
    char a[1000000];
    scanf("%d",&x);
    scanf("%s",a);

     for(i=0;i<x;i++)
     {

        if(a[i]=='A')
        {
            y++;
        }
        else if(a[i]=='D')
        {
            z++;
        }
    }
    if(y==z)
    {
        printf("Friendship");
    }
    else if(y>z)
    {
        printf("Anton");
    }
    else if(y<z)
    {
        printf("Danik");
    }
}
