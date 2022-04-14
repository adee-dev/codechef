#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,x;
	cin>>n>>x;
	for(int i=1; i<=n/2; i++){
		cout<<x-i<<" ";
	}
	if(n%2==1){
		cout<<x<<" ";
	}
	for(int i=1; i<=n/2; i++){
		cout<<x+i<<" ";
	}
	cout<<"\n";
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}