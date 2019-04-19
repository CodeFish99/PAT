#include<bits/stdc++.h>
using namespace std;
int main(){
	string stu[1005][2],id,s2;
	int n,m,s1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>id>>s1>>s2;
		stu[s1][0]=id;
		stu[s1][1]=s2;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>s1;
		cout<<stu[s1][0]<<" "<<stu[s1][1]<<endl;
	}
	return 0;
}
