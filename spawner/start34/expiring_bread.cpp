#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m,k;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		if((m*k)>=n) cout<<"Yes\n";
		else cout<<"No\n";
	}
	

	return 0;
}