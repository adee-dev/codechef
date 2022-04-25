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
	int n;cin>>n;
	bool flag;
	int arr[n+1];
	arr[0]=-1;
	fri(1,n+1){
		cin>>arr[i];
	}
	fri(1,n){
		if(arr[i]<=arr[i+1]){
			continue;
		}
		else{
			swap(arr[i],arr[i+1]);
			//cout<<"NO\n";
			break;
		}
	}
	
//	fri(1,n+1){
//		cout<<arr[i];
//	}
	
	fri(1,n){
		if(arr[i]<=arr[i+1]){
			flag= true;
		}
		else{
			flag= false;
			break;
		}
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
}
	
int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--) solve();
	return 0;
}