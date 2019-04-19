#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string a;
	cin>>n>>a;
	int row=n/2+n%2;
	for(int i=0;i<row;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==row-1){
				cout<<a;
			}else{
				if(j==0||j==n-1){
					cout<<a;
				}else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
