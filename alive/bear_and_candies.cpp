#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int a,b, sa=0, sb=0;
	int c=0;
	cin>>a>>b;
	while(sa<=a && sb<=b){
		c=c+1;
		sa=sa+c;
		c=c+1;
		sb=sb+c;
	}
	if(sa>a && sb>b){
		cout<<"Bob\n";

	}
	else if(sa>a){
		cout<<"Bob\n";
	}
	else{
		cout<<"Limak\n";
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