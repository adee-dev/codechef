#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int x,y,c=0;
	cin>>x>>y;
	while(x!=y){
		if(x>y){
			x=x-2;
			y=y-1;
			c=c+1;
		}
		else if(y>x){
			x=x+2;
			y=y+1;
			c=c+1;
		}
		else if(x==y){
			cout<<0<<endl;
		}
	}
		cout<<c<<endl;
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