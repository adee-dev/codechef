#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,x;
	cin>>n>>x;
	if(x%n==0){
		
		if(x>=n) {	
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	else{
			cout<<"NO\n";
		}
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