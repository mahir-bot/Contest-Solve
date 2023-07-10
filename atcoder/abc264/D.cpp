#include<bits/stdc++.h>
using namespace std;
const string t="atcoder";
string s,tt;
int main()
{
	cin>>s;
	int n=s.size(),sum=0;
	for(int i=0;i<n;i++)
	{
		int id;
		for(int j=i+1;j<n;j++)
			if(s[j]==t[i])
			{
				id=j;
				for(int k=j;k>=i+1;k--) swap(s[k],s[k-1]),sum++;
				
				break;
			}
	}
	printf("%d",sum);
	return 0;
}