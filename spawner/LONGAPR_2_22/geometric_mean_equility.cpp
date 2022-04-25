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
	int n,po=0,ne=0;cin>>n;
	int arr[n];
	fr(n){
		cin>>arr[i];
		if(arr[i]==1) po++;
		else ne++;
	}
	//cout<<po<<" "<<ne<<endl;
	if(abs(po-ne)>=3) cout<<"No\n";
	else if(abs(po-ne)<2) cout<<"Yes\n";
	else if(abs(po-ne)==2){
		if(po%2==0 && ne%2==0) cout<<"Yes\n";
		else cout<<"No\n";
	}
	else cout<<"No\n";
}

	
int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--) solve();
	return 0;
}