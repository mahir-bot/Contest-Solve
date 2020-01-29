#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
        if (i%2==1)
        {
            printf("I hate that ");
        }
       else
            printf("I love that ");
    }

        if (n%2==1)
        {
          printf("I hate it ");
        }
        if (n%2==0)
        {
            printf("I love it ");
        }

}
