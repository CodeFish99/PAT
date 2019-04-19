#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int c=a+b;
	if(c<0){
		cout<<'-';
		c=-c;
	}
	string str=to_string(c);
	for(int i=0;i<str.length();i++){
		cout<<str[i];
		if(((str.length()-i)%3==1)&&i!=str.length()-1)cout<<',';
	}
	return 0;
} 
