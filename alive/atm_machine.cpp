#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		
		if((k-arr[i])>=0){
			cout<<1;
			k=k-arr[i];
		}
		else if(k-arr[i]<0){
			cout<<0;
		}
	}
	cout<<endl;
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