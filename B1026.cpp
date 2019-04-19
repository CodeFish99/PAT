#include<bits/stdc++.h>
using namespace std;
int main(){
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int time=c2-c1;
	time=(int)round((double)time/100);
	int hh,mm,ss;
	hh=time/3600;
	time%=3600;
	mm=time/60;
	ss=time%60;
	printf("%02d:%02d:%02d",hh,mm,ss);
	return 0;
} 
