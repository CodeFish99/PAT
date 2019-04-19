#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i=0;
	while(str[i]!='E') i++;
	string t=str.substr(1,i-1);
	if(str[0]=='-') cout<<'-';
	int e=stoi(str.substr(i+1));	
	if(e<0){
		cout<<"0.";
		for(int j=0;j<abs(e)-1;j++){
			cout<<'0';			
		}
		for(int j=0;j<t.length();j++){
			if(t[j]!='.')cout<<t[j];
		}
	}else{
		if(e>=t.length()-2){
			for(int j=0;j<t.length();j++){
				if(t[j]!='.')cout<<t[j];
			}
			for(int j=0;j<e-t.length()+2;j++){
				cout<<'0';
			}
		}else{
			for(int j=0;j<t.length();j++){
				if(t[j]!='.')cout<<t[j];
				if(j==1+e)cout<<'.';
			}
		}
	}
	return 0;
}
