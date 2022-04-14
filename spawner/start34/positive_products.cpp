#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;cin>>t;
	while(t--){
		long int n, pos=0, neg=0;
		cin>>n;
		long int a[n];
		for (int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]>0) pos++;
			if(a[i]<0) neg++;
		}
		long int count=(pos*(pos-1)/2)+(neg*(neg-1)/2);
		cout<<count<<endl;
	}
	return 0;
}