    #include <stdio.h>
    int main()
    {
       int x,y=0,n=0,z,c=0;
       char a[51];
       scanf("%s",a);
       z= strlen(a);
       while(z--)
       {
           if(a[z]=='a')
           {
               y++;
           }
           else if(a[z]!='a')
           {
               n++;
           }
       }
       if(y>n)
       {
           printf("%d\n",strlen(a));
       }
       else if(y<=n)
       {

           c=y+(y-1);
           printf("%d\n",c);
       }

    }
