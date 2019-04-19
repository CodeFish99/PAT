#include<bits/stdc++.h>
using namespace std;
int main(){
	string mp[15]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string s;
	int sum=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		sum+=s[i]-'0';
	}
	string num=to_string(sum);
	for(int i=0;i<num.length();i++){
		cout<<mp[num[i]-'0'];
		if(i!=num.length()-1) cout<<" ";
	}
	return 0;
} 
