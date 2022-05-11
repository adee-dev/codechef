/**
 * Author: Aditya Dayal
 * Platform: Codechef
 * Enjoy!!! <3
**/

#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vd vector<double>
#define mi map<int, int>
#define pb push_back
#define pf push_front
#define all(var) var.begin(), var.end()

#define endl "\n"
#define fr(n) for(int i=0; i<n; i++)
#define fri(a,n) for(int i=a; i<n; i++)
#define int long long
#define OwO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//-----------------------------:)----------------------------------

int digonalSq(int x, int y, int n){
	int topLeft = min(y-1, n-x);
 
    int bottomRight = min(x-1, y-1);
 
    int topRight = min(n-y, n - x);
 
    int bottomLeft = min(n-y, x-1);
 
    return (topLeft + topRight + bottomRight + bottomLeft);
}

void solve(){
	int n,x,y;cin>>n>>x>>y;

	//if(n==2 || n==3) cout<<digonalSq(x,y,n)<<endl;
	cout<<digonalSq(x,y,n)+(2*(n-1))<<endl;
}
	
int32_t main(){	
	OwO;
	int UwU;cin>>UwU;
	while(UwU--) solve();
	return 0;
}