#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	long long a,b,c;
	for(int i=1;i<=n;i++){
		scanf("%ld%ld%ld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%d: true",i);
		}else{
			printf("Case #%d: false",i);
		}
		printf("\n");
	}
	return 0;
}
