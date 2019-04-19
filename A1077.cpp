#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,minlen,len;
	string s,ans;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		getline(cin,s);
		len=s.length();
		reverse(s.begin(),s.end());
		if(i==0){
			ans=s;
			continue;
		}else{
			int anslen=ans.length();
			minlen=min(len,anslen); 
			int j=0;
			for(;j<minlen;j++){
				if(ans[j]!=s[j]){
					break;
				}
			}
			ans=s.substr(0,j);
		}
	} 
	if(ans.length()==0){
		ans="nai";
	} else{
		reverse(ans.begin(),ans.end());
	}
	cout<<ans;
	return 0;
}
