#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int a,b,c,d,r;
	cin>>a>>b>>c>>d;
	r=a+b+c;
	if(r<=d){
		cout<<1<<endl;
	}
	else if((a+b)<=d){
		cout<<2<<endl;
	}
	else{
		cout<<3<<endl;
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