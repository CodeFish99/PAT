#include<bits/stdc++.h>
using namespace std;
int func(int N){
	int sqr=sqrt((double)N);
	int i=sqr;
	for(;i<=N;i++){
		if(N%i==0&&i>=N/i){
			return i;
		}
	}
	return N;
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int N;
	scanf("%d",&N);
	int m=func(N);
	int n=N/m;

	vector<int> a(N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}  
	sort(a.begin(),a.end(),cmp);
	vector<vector<int> > b(m,vector<int>(n));
	int level=m/2+m%2;
	int t=0;
	for(int i=0;i<level;i++){
		for(int j=i;j<=n-i-1&&t<=N-1;j++){
			b[i][j]=a[t++];
		}
		for(int j=i+1;j<=m-i-2&&t<=N-1;j++){
			b[j][n-i-1]=a[t++];
		}
		for(int j=n-i-1;j>=i&&t<=N-1;j--){
			b[m-i-1][j]=a[t++];
		}
		for(int j=m-i-2;j>=i+1&&t<=N-1;j--){
			b[j][i]=a[t++];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",b[i][j]);
			if(j!=n-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
} 
