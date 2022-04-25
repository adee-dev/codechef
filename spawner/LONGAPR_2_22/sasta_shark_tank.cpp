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

void solve(){
	int a,b;cin>>a>>b;
	if(a*10>b*5) cout<<"FIRST"<<endl;
	else if(a*10<b*5) cout<<"SECOND"<<endl;
	else if(a*10==b*5) cout<<"ANY"<<endl;
}
	
int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--) solve();
	return 0;
}