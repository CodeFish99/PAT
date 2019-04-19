#include<bits/stdc++.h>
using namespace std;
const int maxn=1000010;
struct student{
	int id,grade[4],rank[4];
}temp;
vector<student> stu;
int Rank[maxn][2],flag;
bool cmp(student a,student b){
	return a.grade[flag]>b.grade[flag];
}
int main(){
	char mp[10]="ACME";
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>temp.id;
		temp.grade[0]=0;
		for(int j=1;j<4;j++){
			cin>>temp.grade[j];
			temp.grade[0]+=temp.grade[j];
		}
		stu.push_back(temp);	
	}
	for(flag=0;flag<4;flag++){
		sort(stu.begin(),stu.end(),cmp);
		stu[0].rank[flag]=1;
		for(int i=1;i<n;i++){
			if(stu[i].grade[flag]==stu[i-1].grade[flag]){
				stu[i].rank[flag]=stu[i-1].rank[flag];
			}else{
				stu[i].rank[flag]=i+1;
			}
		}
	}
	for(int i=0;i<n;i++){
		int k,min=maxn;
		for(int j=0;j<4;j++){
			if(stu[i].rank[j]<min){
				k=j;
				min=stu[i].rank[j];
			}
		}
		Rank[stu[i].id][0]=k;
		Rank[stu[i].id][1]=min;
	}
	for(int i=0;i<m;i++){
		int id;
		cin>>id;
		if(Rank[id][1]==0){
			cout<<"N/A"<<endl;
		}else{
			cout<<Rank[id][1]<<" "<<mp[Rank[id][0]]<<endl;
		}
	}
	return 0;
} 
