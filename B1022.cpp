#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,x;
	cin>>a>>b>>x;
	int sum=a+b;
	vector<int> num;
	int t=0;
	do{
		num.push_back(sum%x);
		sum/=x;
	}while(sum!=0);
	for(int i=num.size()-1;i>=0;i--){
		cout<<num[i];
	}
	return 0;
}
