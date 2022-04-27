#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n; string s;
	cin>>n>>s;
	for(int i=0; i<n-1; i+=2){
		char ch = s[i];
		s[i]=s[i+1];
		s[i+1]=ch;
	}
	for(int i=0; i<n; i++){
		s[i]='z'+'a'-s[i];
	}
	cout<<s<<endl;
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