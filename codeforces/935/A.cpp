        #include <stdio.h>
        int main()
        {
            int x,i,j,y;
            long long int z=0;
            scanf("%d",&x);
            for(i=1;i<x;i++)
            {
                if(x%i==0)
                {
                    z++;
                }

            }
            printf("%d\n",z);
        }
