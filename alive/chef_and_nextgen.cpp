#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b,x,y;
	cin>>t;
	while(t--){
		cin>>a>>b>>x>>y;
		if(a*b<=x*y) cout<<"Yes\n";
		else cout<<"No\n";
	}

	return 0;
}