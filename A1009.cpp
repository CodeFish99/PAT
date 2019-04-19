#include<bits/stdc++.h>
using namespace std;
const int maxn=2222;
double a[maxn]={0.0};
double b[maxn]={0.0};
double c[maxn]={0.0};
int main(){
	int n1,n2,e;
	double k;
	cin>>n1;
	for(int i=0;i<n1;i++){
		cin>>e>>k;
		a[e]=k;
	}
	cin>>n2;
	for(int i=0;i<n2;i++){
		cin>>e>>k;
		b[e]=k;
	}
	for(int i=0;i<maxn;i++){
		if(a[i]==0){
			continue;
		}else{
			for(int j=0;j<maxn;j++){
				if(b[j]==0){
					continue;
				}else{
					c[i+j]+=a[i]*b[j];
				}
			}
		}
	}
	int cnt=0;
	for(int i=maxn-1;i>=0;i--){
		if(c[i]!=0){
			cnt++;
		}
	}
	cout<<cnt;
	for(int i=maxn-1;i>=0;i--){
		if(c[i]){
			printf(" %d %.1f",i,c[i]);
		}
	}
	return 0;
}
