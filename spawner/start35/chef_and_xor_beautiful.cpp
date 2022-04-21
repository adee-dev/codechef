#include<bits/stdc++.h>
using namespace std;
#define int long long
#define OwO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
	int n,x,c=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cin>>x;
	map<int, int> m;
	for(int i=0; i<n; i++){
		m[arr[i]&x]++;
	}
	for(auto i: m){
		c+=i.second*i.second;
	}
	/*
	cin>>x;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((((arr[i]^arr[j])&x))==0){
				c=c+1;
				cout<<	
			}
			
		}

	}

	for (int ij = 0, i = 0, j = 0; ij < n*n; ++ij) { 
	// ... something 
	  if((((arr[i]^arr[j])&x))==0){
			c=c+1;
		}
	 
	  if (++j == n) { 
		j = 0; 
		++i; 
	  } 
	}
	*/
	
	cout<<c<<endl;
}

int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--){
		solve();
	}
	return 0;
}