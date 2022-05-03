#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,p=0,q=(n-1);
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		if((arr[0]%2)==(arr[n-i-1])%2){
			cout<<1<<endl;
			break;
		}
		else{
			cout<<2<<endl;
			break;
		}
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