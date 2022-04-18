#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
        string s;
        cin>>s;
        int n= s.length();
        int i=0,count=0;
        while(i<n){
            if(s[i]=='0')
            { i++;
            }
            else
            {count++; 
            i++;
            while(i<n && s[i]=='1')
            i++;
            }
        }
        cout<<count<<endl;
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