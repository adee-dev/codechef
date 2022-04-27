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
	int x,y,z;cin>>x>>y>>z;
	if(z%x==0 && z%y==0) cout<<"ANY\n";
	else if(z%x==0) cout<<"CHICKEN\n";
	else if(z%y==0) cout<<"DUCK\n";
	else cout<<"NONE\n";
	
}
	
int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--) solve();
	return 0;
}