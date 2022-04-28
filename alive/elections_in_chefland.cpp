#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b+c==101 && (a>50)){
		cout<<"A\n";
	}
	else if(a+b+c==101 && (b>50)){
		cout<<"B\n";
	}
	else if(a+b+c==101 && (c>50)){
		cout<<"C\n";
	}
	else{
		
		cout<<"NOTA\n";
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