#include <stdio.h>
int main()
{
    int i,x,y=0,z=0;
    char a[100];
    scanf("%d",&x);
    scanf("%s",a);
    for(i=0;i<x;i++)
    {

        if(a[i]=='S' && a[i+1]=='F')
        {
            y+=1;
        }
        else if(a[i]=='F' && a[i+1]=='S')
        {
            z+=1;
        }
        else
            continue;
    }
    if(y>z)
    {
        printf("YES\n");
    }
    else if(y<=z)
    {
        printf("NO\n");
    }


}
