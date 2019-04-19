#include<bits/stdc++.h>
using namespace std;
int main(){
	char mp[20]="0123456789JQK";
	string s1,s2;
	cin>>s1>>s2;
	int len1=s1.length();
	int len2=s2.length();
	for(int i=1;i<=len1&&i<=len2;i++){
		int num1=s1[len1-i]-'0';
		int num2=s2[len2-i]-'0';
		if(i%2==1){
			s2[len2-i]=mp[(num1+num2)%13];
		}else{
			int x=num2-num1;
			if(x<0){
				s2[len2-i]=x+10+'0';
			}else{
				s2[len2-i]=x+'0';
			}
		}
	}
	cout<<s2;
	return 0;
} 
