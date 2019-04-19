#include<bits/stdc++.h>
using namespace std;
struct person{
	string id;
	int hh1,mm1,ss1;
	int hh2,mm2,ss2;
}mostEarly,mostLate,temp;
bool lessEarly(person a,person b){
	if(a.hh1!=b.hh1) return a.hh1<b.hh1;
	else if(a.mm1!=b.mm1) return a.mm1<b.mm1;
	else return a.ss1<b.ss1;
}
bool moreLate(person a,person b){
	if(a.hh2!=b.hh2) return a.hh2>b.hh2;
	else if(a.mm2!=b.mm2) return a.hh2>b.hh2;
	else return a.ss2>b.ss2;
}
int main(){
	int n;
	cin>>n;
	mostEarly.hh1=999;
	mostEarly.mm1=999;
	mostEarly.ss1=999;
	mostLate.hh2=0;
	mostLate.mm2=0;
	mostLate.ss2=0;
	for(int i=0;i<n;i++){
		cin>>temp.id;
		scanf("%d:%d:%d",&temp.hh1,&temp.mm1,&temp.ss1);
		scanf("%d:%d:%d",&temp.hh2,&temp.mm2,&temp.ss2);
		if(lessEarly(temp,mostEarly)){
			mostEarly=temp;
		}
		if(moreLate(temp,mostLate)){
			mostLate=temp;
		}
	}
	cout<<mostEarly.id<<" "<<mostLate.id<<endl;
	return 0;
}
