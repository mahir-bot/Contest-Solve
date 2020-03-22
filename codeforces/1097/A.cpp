    #include <stdio.h>
    int main()
    {
        int i,j,k=0,l=1;
        char a[2],b[25];

        scanf("%s",a);
        for(i=0;i<5;i++)
        {
            scanf("%s",b);

            for(j=0; j<2; j++)
            {
                if(b[j]==a[0] || b[j]==a[1])
                {
                    k=1;

                }
                else
                    continue;

            }

        }

        if(k==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }
