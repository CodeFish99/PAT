#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int d[maxn];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",d+i);
		
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b){
			swap(a,b);
		}
		int sum1=0,sum2=0;
		for(int j=a;j<b;j++){
			sum1+=d[j];
		}
		for(int j=a-1;j>=1;j--){
			sum2+=d[j];
		}
		for(int j=5;j>=b;j--){
			sum2+=d[j];
		}
		printf("%d\n",min(sum1,sum2));
	}
	return 0;
}
