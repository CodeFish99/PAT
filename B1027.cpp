#include<bits/stdc++.h>
using namespace std;
vector<int> num;
void init(){
	int result=1,i=3;
	while(result<1005){
		num.push_back(result);
		result+=2*i;
		i+=2;
	}
}
int main(){
	int n,ans;
	string a;
	cin>>n>>a;
	init();
	int index=lower_bound(num.begin(),num.end(),n)-num.begin();
	if(num[index]!=n){
		index--;
		ans=n-num[index];
	}else{
		ans=0;
	}
	int max=index*2+1;
	for(int i=max;i>=1;i-=2){
		for(int j=0;j<(max-i)/2;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<a;
		}
		cout<<endl;
	}
	for(int i=3;i<=max;i+=2){
		for(int j=0;j<(max-i)/2;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<a;
		}
		cout<<endl;
	}
	cout<<ans;
	return 0;
}
