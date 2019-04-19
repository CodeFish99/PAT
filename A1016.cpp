#include<bits/stdc++.h>
using namespace std;
int mp[24];
struct mytime{
	int mon,dd,hh,mm,flag;
}temp;
bool cmp(mytime a,mytime b){
	if(a.mon!=b.mon) return a.mon<b.mon;
	else if(a.dd!=b.dd) return a.dd<b.dd;
	else if(a.hh!=b.hh) return a.hh<b.hh;
	else return a.mm<b.mm;
}
void cal(mytime a,mytime b,int &sum,int &price){
	while(a.mm!=b.mm||a.hh!=b.hh||a.dd!=b.dd){
		sum++;
		price+=mp[a.hh];
		a.mm++;
		if(a.mm==60){
			a.mm=0;
			a.hh++;
		}
		if(a.hh==24){
			a.hh=0;
			a.dd++;
		}
	}
}
map<string,vector<mytime> > rec;
stack<mytime> st;
int main(){
	for(int i=0;i<24;i++){
		cin>>mp[i];
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string name,line;
		cin>>name;
		scanf("%d:%d:%d:%d",&temp.mon,&temp.dd,&temp.hh,&temp.mm);
		cin>>line;
		if(line=="on-line"){
			temp.flag=1;
		}else{
			temp.flag=0;
		}
		rec[name].push_back(temp);
	}
	for(auto it : rec){
		int total=0,sign=0;
		vector<mytime> now=it.second;
		sort(now.begin(),now.end(),cmp);
		while(!st.empty()) st.pop();
		for(int i=0;i<now.size();i++){
			if(st.empty()){
				if(now[i].flag){
					st.push(now[i]);
				}
			}else{
				if(!now[i].flag){
					int sum=0,price=0;
					mytime a=st.top();
					mytime b=now[i];
					st.pop();
					cal(a,b,sum,price);
					total+=price;
					if(!sign){
						cout<<it.first<<" ";
						printf("%02d\n",now[0].mon);
						sign=1;
					}
					printf("%02d:%02d:%02d %02d:%02d:%02d %02d $%.2f\n",a.dd,a.hh,a.mm,b.dd,b.hh,b.mm,sum,(double)price/100);
				}else{
					st.pop();
					st.push(now[i]);
				}
			}
		}
		if(sign){
			printf("Total amount: $%.2f\n",(double)total/100);
		}
	}
	return 0;
}
