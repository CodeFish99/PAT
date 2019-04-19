#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans[10]={0};
	int cnt[10]={0};
	int n,p=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int num;
		scanf("%d",&num);
		if(num%5==0){
			if(num%2==0){
				ans[1]+=num;
				cnt[1]++;
			}
		}else if(num%5==1){
			ans[2]+=p*num;
			p=-p;
			cnt[2]++;
		}else if(num%5==2){
			cnt[3]++;
		}else if(num%5==3){
			cnt[4]++;
			ans[4]+=num;
		}else if(num%5==4){
			if(num>ans[5]){
				ans[5]=num;
			}
			cnt[5]++;
		}
	}
	for(int i=1;i<=5;i++){
		if(cnt[i]==0){
			printf("N");
		}else if(i==1){
			printf("%d",ans[1]);
		}else if(i==2){
			printf("%d",ans[2]);
		}else if(i==3){
			printf("%d",cnt[3]);
		}else if(i==4){
			printf("%.1f",(double)ans[4]/cnt[4]);
		}else if(i==5){
			printf("%d",ans[5]);
		}
		if(i!=5)printf(" ");
	}
	return 0;
}	
