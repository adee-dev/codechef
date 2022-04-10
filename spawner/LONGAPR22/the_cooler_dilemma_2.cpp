#include<iostream>
using namespace std;

int main(){
	int t, x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		int r=y%x;
		if(r!=0){
			cout<<abs(y/x)<<endl;
		}
		else{
			cout<<abs(y/x)-1<<endl;
		}
		
		
	}	
	
	return 0;
}