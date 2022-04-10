#include<iostream>
using namespace std;

int main(){
	int t,x,y,z;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
		if((x*z<y)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	
	return 0;
}