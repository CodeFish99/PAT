#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
double a[maxn],b[maxn],c[maxn];
int main(){
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	int n1,n2,e;
	double k;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
		scanf("%d%lf",&e,&k);
		a[e]=k;
	}
	scanf("%d",&n2);
	for(int i=0;i<n2;i++){
		scanf("%d%lf",&e,&k);
		b[e]=k;
	}
	for(int i=maxn-1;i>=0;i--){
		c[i]=a[i]+b[i];
	}
	int cnt=0;
	for(int i=0;i<maxn;i++){
		if(c[i]!=0){
			cnt++;
		}
	}
	printf("%d",cnt);
	for(int i=maxn-1;i>=0;i--){
		if(c[i]!=0){
			printf(" %d %.1f",i,c[i]);
		}
	}
	return 0;
}
