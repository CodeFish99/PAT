#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
int main(){
	string n;
	cin>>n;
	for(int i=0;i<n.length();i++){
		if(mp.find(n[i])==mp.end()){
			mp[n[i]]=1;
		}else{
			mp[n[i]]++;
		}
	}
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<':'<<it->second<<endl;
	}
	return 0;
}
