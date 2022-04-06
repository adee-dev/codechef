#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int n, x, y;
	cin>>n;
	string arr[n];
	
	for(int i = 0; i<n; i++){
		cin>>x>>y;
		int tot = y*30;
		if (x>tot){
			//cout<<"SECOND";
			arr[i]="YES";
		}
		else if (x<tot){
			//cout<<"FIRST";
				arr[i]="NO";
		}
		else{
			//cout<<"SECOND";
			arr[i]="YES";
		}
		
	}
	for (int i;i<n;i++){
		cout<<arr[i]<<"\n";
	}
	return 0;
}