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
	int a,b,a1,b1,a2,b2;
	cin>>a>>b>>a1>>b1>>a2>>b2;
	if(((a==a1) || (a==b1)) && ((b==a1) || (b==b1))) cout<<1<<endl;
	else if(((a==a2) || (a==b2)) && ((b==a2) || (b==b2))) cout<<2<<endl;
	else cout<<0<<endl;
}
	
int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--){
		solve();
	}
	return 0;
}