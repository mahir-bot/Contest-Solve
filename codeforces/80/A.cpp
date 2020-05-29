    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int a[20]{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int b,c;
    cin>>b>>c;
    for(int i = 0;i<17;i++){
    	if (a[i]==b && a[i+1]==c){
    		cout<<"YES";
    		return 0;
    	}
    }
    cout<<"NO";
    }
