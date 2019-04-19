#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,pa=0,b,pb=0;
	int da,db;
	scanf("%lld%d%lld%d",&a,&da,&b,&db);
	while(a!=0){
		if(a%10==da) pa=pa*10+a%10;
		a/=10;
	}
	while(b!=0){
		if(b%10==db) pb=pb*10+b%10;
		b/=10;
	}
	long long result=pa+pb;
	printf("%lld",result);
	return 0;
}
