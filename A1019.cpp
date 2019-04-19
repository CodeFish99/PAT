#include<bits/stdc++.h>
using namespace std;
bool judge(vector<int> a){
	int length=a.size();
	for(int i=0;i<length/2;i++){
		if(a[i]!=a[length-1-i]){
			return false;
		}
	}
	return true;
}
int main(){
	vector<int> a;
	int n,x;
	cin>>n>>x;
	do{
		a.push_back(n%x);
		n/=x;
	}while(n!=0);
	if(judge(a)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	for(int i=a.size()-1;i>=0;i--){
		cout<<a[i];
		if(i!=0) cout<<" ";
	}
	return 0;
}
