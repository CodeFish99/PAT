#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int length=str.length();
	int m=(length+2)/3;
	int n=length-2*m+2;
	vector<vector<char> > a(m,vector<char>(n));
	int t=0;
	for(int i=0;i<m;i++){
		a[i][0]=str[t++];
	}
	for(int i=1;i<n;i++){
		a[m-1][i]=str[t++];
	}
	for(int i=m-2;i>=0;i--){
		a[i][n-1]=str[t++];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==0){
				cout<<" ";
			}else{
				cout<<a[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
} 
