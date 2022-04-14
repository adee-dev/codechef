#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,x;
	int arr[1001];
	cin>>t;
	while(t--){
		int sum,s;
		cin>>n>>x;
		
		for(int i=0; i<n-1; i++){
			cin>>s;
			//arr[i]=a;
			sum=sum+s;
		}
		
		if((n*x)-(sum)>=0){
			
			cout<<((n*x)-(sum))<<endl;
			sum=s=0;
		} 
		else{
			
			cout<<0<<endl;
			sum=s=0;
		} 
	}

	return 0;
}