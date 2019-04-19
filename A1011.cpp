#include<bits/stdc++.h>
using namespace std;
int main(){
	char mp[10]="WTL";
	int id;
	double max,num,sum=1.0;
	for(int i=0;i<3;i++){
		max=0,id=0;
		for(int j=0;j<3;j++){
			scanf("%lf",&num);
			if(num>max){
				max=num;
				id=j;
			}
		}
		cout<<mp[id]<<" ";
		sum*=max;
	}
	sum=(sum*0.65-1)*2;
	printf("%.2f",sum);
	return 0;
}
