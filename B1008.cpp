#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int a[1000];
	scanf("%d%d",&n,&m);
	m=m%n;
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	int num=0;
	for(int i=n-m;i<n;i++){
		printf("%d",a[i]);
		num++;
		if(num!=n)printf(" ");
	}
	for(int i=0;i<n-m;i++){
		printf("%d",a[i]);
		num++;
		if(num!=n)printf(" "); 
	}
	return 0;
}
