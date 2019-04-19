#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a*b;
	string s=to_string(c);
	int i=s.length()-1;
	while(s[i]=='0'){
		i--;
	}
	for(;i>=0;i--){
		printf("%c",s[i]);
	}
	return 0;
}
