#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string str,mp[20]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	cin>>str;
	int sum=0;
	for(int i=0;i<str.length();i++){
		sum+=str[i]-'0';
	}
	string result=to_string(sum);
	for(int i=0;i<result.length();i++){
		cout<<mp[result[i]-'0'];
		if(i!=result.length()-1) cout<<" ";
	}
	return 0;
}
