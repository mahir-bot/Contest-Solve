#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x;
  double y=0.0;
  cin>>x;
  for(int i=1;i<=x;i++)
  {
      y+=1.0/i;
  }
  printf("%.12lf",y);
}
