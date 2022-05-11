/*
Aditya Dayal's template for codechef!<3!
*/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fr(n) for(int i=0; i<n; i++)
#define fri(a,n) for(int i=a; i<n; i++)
#define int long long
#define OwO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
	int u,v,a,s;cin>>u>>v>>a>>s;
	if((v*v)>=((u*u)-2*a*s)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
	
int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--){
		solve();
	}
	return 0;
}