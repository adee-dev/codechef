#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y;
	cin>>n;
	int arr[n];
	
	for(int i = 0; i<n; i++){
		cin>>x;
		if (x%4==0){
			//cout<<"SECOND";
			arr[i]=(x/4);
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