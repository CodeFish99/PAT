#include<bits/stdc++.h>
using namespace std;
int main(){
	string mp[10]={"MON","TUE","WED","THU","FRI","SAT","SUN"},s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int i=0;
	for(;i<s1.length()&&i<s2.length();i++){
		if(s1[i]>='A'&&s1[i]<='G'&&s1[i]==s2[i]){
			break;
		}
	}
	cout<<mp[s1[i]-'A']<<" ";
	for(i++;i<s1.length()&&i<s2.length();i++){
		if(((s1[i]>='A'&&s1[i]<='N')||isdigit(s1[i]))&&s1[i]==s2[i]){
			break;
		}
	}
	if(!isdigit(s1[i])){
		printf("%02d",s1[i]-'A'+10);
	}else{
		printf("%02d",s1[i]-'0');
	}
	cout<<':';
	for(i=0;i<s3.length()&&i<s4.length();i++){
		if(isalpha(s3[i])&&s3[i]==s4[i]){
			break;
		}
	}
	printf("%02d",i);
	return 0;
} 
