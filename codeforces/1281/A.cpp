    #include <stdio.h>
    int main()
    {
        int a,x,y,i;
        char z[1001];
        scanf("%d",&x);
        for(i=0;i<x;i++)
        {
            scanf("%s",z);
            a= strlen(z);

                if(z[a-1]=='o')
                {
                    printf("FILIPINO\n");
                    continue;
                }
                else if(z[a-1]=='u')
                {
                    printf("JAPANESE\n");
                    continue;
                }

                else
                {
                    printf("KOREAN\n");
                    continue;
                }


            }
    }
