#include<bits/stdc++.h>
using namespace std;
int main(){
	int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char test[15]="10X98765432";
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		bool flag=true;
		int sum=0;
		cin>>s;
		for(int i=0;i<s.length()-1;i++){
			if(s[i]>='0'&&s[i]<='9'){
				sum+=(s[i]-'0')*weight[i];
			}else{
				cout<<s<<endl;
				flag=false;
				break;
			}
		}
		if(flag){
			sum%=11;
			if(s[17]!=test[sum]){
				cout<<s<<endl;
			}else{
				cnt++;
			}
		} 
	}
	if(cnt==n){
		cout<<"All passed"<<endl;
	}
	return 0;
}
