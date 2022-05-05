/**
 * Author: Aditya Dayal
 * Platform: Codechef
 * Enjoy!!! <3
**/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fr(n) for(int i=0; i<n; i++)
#define fri(a,n) for(int i=a; i<n; i++)
#define int long long
#define OwO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//-----------------------------:)----------------------------------

void solve(){
	int x,y,z;
	cin>>x>>y>>z;
	if(x<=z && (x+y)<=z) cout<<2<<endl;
	else if(x<=z&&(x+y)>z) cout<<1<<endl;
	else cout<<0<<endl;
}
	
int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--) solve();
	return 0;
}