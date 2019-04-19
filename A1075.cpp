#include<bits/stdc++.h>
using namespace std;
const int maxn=10010;
struct student{
	bool needPrint,flag[10];
	int id,score[10],perfect,sum;
	student(){
		memset(score,0,sizeof(score));
		memset(flag,0,sizeof(flag));
		perfect=0;
		sum=0;
		needPrint=false;
	}
}stu[maxn];
vector<student> ps;
bool cmp(student a,student b){
	if(a.sum!=b.sum) return a.sum>b.sum;
	else if(a.perfect!=b.perfect) return a.perfect>b.perfect;
	else return a.id<b.id;
}
int main(){
	int n,k,m,toll[10];
	cin>>n>>k>>m;
	for(int i=1;i<=k;i++){
		cin>>toll[i];
	}
	for(int i=0;i<m;i++){
		int id,num,score;
		cin>>id>>num>>score;
		stu[id].id=id;
		stu[id].flag[num]=true;
		if(score!=-1){
			stu[id].needPrint=true;
			if(stu[id].score[num]!=toll[num]&&score==toll[num]){
				stu[id].perfect++;
			}
			if(score>stu[id].score[num]) stu[id].score[num]=score;
		}
	}
	for(int i=1;i<=n;i++){
		if(stu[i].needPrint){
			for(int j=1;j<=k;j++){
				stu[i].sum+=stu[i].score[j];
			}
			ps.push_back(stu[i]);
		}
	}
	sort(ps.begin(),ps.end(),cmp);
	int r=1;
	for(int i=0;i<ps.size();i++){
		if(i>0&&ps[i].sum!=ps[i-1].sum){
			r=i+1;
		}
		printf("%d %06d %d",r,ps[i].id,ps[i].sum);
		for(int j=1;j<=k;j++){
			if(ps[i].flag[j]){
				printf(" %d",ps[i].score[j]);
			}else{
				printf(" -");
			}
		}
		printf("\n");
	}
	return 0;
}
