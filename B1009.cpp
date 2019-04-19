#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	for(int i=str.length()-1;i>=0;i--){
		if(str[i]==' '){
			string s=str.substr(i+1);
			str.erase(str.begin()+i,str.end());
			cout<<s<<" ";
		}else if(i==0){
			cout<<str;
		}
	}
	return 0;
}
