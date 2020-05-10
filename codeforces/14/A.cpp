#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <math.h>
using namespace std;
int gv[10000],n;
string s[22],t[22];
int main()
{

	long long i,j,a,b;
	char x[101][101];
	cin>>i>>j;
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
		  cin>>	x[a][b];
		}
	}

	int min_i=i,max_i=-1,min_j=j,max_j=-1;
	  for(a=0;a<i;a++)
      {
          for(b=0;b<j;b++)
          {
              if(x[a][b]=='*')
              {
                  if(a<min_i)min_i=a;
                  if(a>max_i)max_i=a;
                  if(b<min_j)min_j=b;
                  if(b>max_j)max_j=b;
              }
          }
      }
      for(a=min_i;a<=max_i;a++)
      {
          for(b=min_j;b<=max_j;b++)
          {
              cout<<x[a][b];
          }
          cout<<endl;
      }
}
