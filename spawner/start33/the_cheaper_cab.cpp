#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int n, x, y;
	cin>>n;
	string arr[n];
	
	for(int i = 0; i<n; i++){
		cin>>x>>y;
		if (x>y){
			//cout<<"SECOND";
			arr[i]="SECOND";
		}
		else if (x<y){
			//cout<<"FIRST";
				arr[i]="FIRST";
		}
		else{
			//cout<<"ANY";
			arr[i]="ANY";
		}
		
	}
	for (int i;i<n;i++){
		cout<<arr[i]<<"\n";
	}
	return 0;
}