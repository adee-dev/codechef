#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y;
	cin>>n;
	int arr[n];
	
	for(int i = 0; i<n; i++){
		cin>>x>>y;
		int j = 0;
		while(y[j]!=y[j+1]){
			//cout<<"SECOND";
			
			j++;
		}
		
		else{
			//cout<<"ANY";
			arr[i]=((x/4) + 1);
		}
		
	}
	for (int i;i<n;i++){
		cout<<arr[i]<<"\n";
	}
	return 0;
}