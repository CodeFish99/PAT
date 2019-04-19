#include<bits/stdc++.h>
using namespace std;
int main(){
	int g1,s1,k1,g2,s2,k2,sum1,sum2,change;
	scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
	sum1=g1*17*29+s1*29+k1;
	sum2=g2*17*29+s2*29+k2;
	change=sum2-sum1;
	if(change<0){
		cout<<'-';
		change=-change;
	}
	cout<<change/(17*29)<<'.'<<(change%(17*29))/29<<'.'<<(change%(17*29))%29<<endl;
	return 0;
}
