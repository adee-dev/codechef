#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve(){
	int N;
	cin>>N;
	vector<int> arr(N);
	for(int i=0;i<N;i++) cin>>arr[i];
	int even =0, odd =0;
	for(int i: arr){
		if(i&1) odd ++;
		else even ++;
	}
	int ans;
	if(odd&1){
		ans=even;
	}
	else{
		ans=min(even, odd/2);
	}
	cout<<ans<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int T; cin>>T;
	while(T--){
		solve();
	}
	
}