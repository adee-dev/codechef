#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,b;
	int w,h,p,s=0;
	cin>>n>>b;
	for(int i=0; i<n; i++){
		cin>>w>>h>>p;
		if(b>=p){
			s=max(s, (w*h));
			
	}
		}
		if(s>0){
			cout<<s<<endl;
			
		}
		else{
			cout<<"no tablet"<<endl;
			
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