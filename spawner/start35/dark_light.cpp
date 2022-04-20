#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;
	cin>>n>>k;
	if(n%4==0){
		if(k==1) cout<<"On\n";
		if(k==0) cout<<"Off\n";
	}
	else if(n%4==3){
		
		if(k==0) cout<<"On\n";
		else cout<<"Ambiguous\n";
	}
	else if(n%4==2 || n%4==1){
		if(k==0) cout<<"On\n";
		else cout<<"Ambiguous\n";
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