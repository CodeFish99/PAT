#include<bits/stdc++.h>
using namespace std;
int main(){
	char mp[3]={'B','C','J'};
	int jiawin=0,yiwin=0;
	int jia[3]={0};
	int yi[3]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char c1,c2;
		getchar();
		scanf("%c %c",&c1,&c2);
		if(c1=='C'&&c2=='J'){
			jiawin++;
			jia[1]++;
		}else if(c1=='C'&&c2=='B'){
			yiwin++;
			yi[0]++;
		}else if(c1=='J'&&c2=='C'){
			yiwin++;
			yi[1]++;
		}else if(c1=='J'&&c2=='B'){
			jiawin++;
			jia[2]++;
		}else if(c1=='B'&&c2=='C'){
			jiawin++;
			jia[0]++;
		}else if(c1=='B'&&c2=='J'){
			yiwin++;
			yi[2]++;
		}
	}
	int k1,k2,max=-1;
	for(int i=0;i<3;i++){
		if(jia[i]>max){
			k1=i;
			max=jia[i];
		}
	}
	max=-1;
	for(int i=0;i<3;i++){
		if(yi[i]>max){
			k2=i;
			max=yi[i];
		}
	}
	printf("%d %d %d\n",jiawin,n-jiawin-yiwin,yiwin);
	printf("%d %d %d\n",yiwin,n-jiawin-yiwin,jiawin);
	printf("%c %c",mp[k1],mp[k2]);
	return 0;
}
