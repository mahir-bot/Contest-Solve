#include <stdio.h>

int main()
{
  int i,j,z=0,k=0,l=0,m=0;
  long long int x,y;
  scanf("%d",&j);


  for(i=0;i<j;i++)
    {

        scanf("%lld%lld",&x,&y);

if(x>y)
{
    if(x%y==0)
    {
        printf("0\n");
        continue;
    }
   k=x/y;
   l=(k+1)*y;
   z=l-x;

   }


else if(x<y)
{
    z=y-x;
}

    printf("%d\n",z);

    z=0;

}


}
