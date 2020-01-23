#include <stdio.h>

int main()
{

   int num[100],n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      scanf("%d",&num[i]);
    }

    int flag = 0;
    for(i=0;i<n;i++)
    {
        if(num[i]==1)
        {
            flag = 1 ;
            break;
        }
    }
    if(flag==1)
    {
        printf("HARD\n");
    }
    else printf("EASY\n");

   ///tui to just akta array index ar value check kortesos madarchod aikhane i mean niche

//    if (num[i]==0 && num[i]!=1)
//        printf("EASY");
//
//     else if (num[i]==1 || num[i]!=0)
//        printf("HARD");


     return 0;

}
