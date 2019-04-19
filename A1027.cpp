#include<bits/stdc++.h>
using namespace std;
int main(){
	char mp[15]="0123456789ABC";
	int num;
	cout<<'#';
	for(int i=0;i<3;i++){
		cin>>num;
		cout<<mp[num/13]<<mp[num%13];
	}
	return 0;
} 
