#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
double poly1[maxn]={0.0};
double poly2[maxn]={0.0};
int main(){
	int k1,k2,n;
	double a;
	cin>>k1;
	for(int i=0;i<k1;i++){
		cin>>n>>a;
		poly1[n]=a;
	}
	cin>>k2;
	for(int i=0;i<k2;i++){
		cin>>n>>a;
		poly2[n]=a;
	}
	int num=0;
	for(int i=0;i<maxn;i++){
		poly1[i]=poly1[i]+poly2[i];
		if(poly1[i]!=0.0)num++;
	}
	cout<<num;
	for(int i=maxn-1;i>=0;i--){
		if(poly1[i]!=0.0){
			printf(" %d %.1f",i,poly1[i]);
		}
	}
	return 0;
} 
