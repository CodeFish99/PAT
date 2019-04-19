#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int e[maxn],p[maxn];
int main(){
	int a,b;
	int num=0;
	while(scanf("%d%d",&a,&b)!=EOF){
		e[num]=a;
		p[num]=b;
		num++;
	}
	for(int i=0;i<num;i++){
		e[i]=e[i]*p[i];
		p[i]--;
	}
	int cnt=0;
	for(int i=0;i<num;i++){
		if(e[i]) cnt++;
	}
	int x=0;
	if(cnt==0){
		printf("0 0");
		return 0;
	}
	for(int i=0;i<num;i++){
		if(e[i]){
			printf("%d %d",e[i],p[i]);
			x++;
		}
		if(x!=cnt){
			printf(" ");
		}
	}
	return 0;
} 
