#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;
    int day=0,stored_amount=0;
    cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++)            {
        cin>>a[i];
        }
        for(int i=1;i<=n;i++)
			{
            stored_amount+=a[i];
            if(k>stored_amount)
            {
               day=i;
                break;
            }
			stored_amount-=k;
            }
            if(day==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO "<<day<<endl;
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