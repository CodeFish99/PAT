#include<bits/stdc++.h>
using namespace std;
struct student{
	string id;
	int score,rank[3];
}temp;
bool cmp(student a,student b){
	if(a.score!=b.score) return a.score>b.score;
	else return a.id<b.id;
}
vector<student> stu,now;
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		cin>>m;
		sum+=m;
		now.clear();
		for(int j=0;j<m;j++){
			cin>>temp.id>>temp.score;
			temp.rank[1]=i;
			now.push_back(temp);
		}
		sort(now.begin(),now.end(),cmp);
		now[0].rank[2]=1;
		stu.push_back(now[0]);
		for(int j=1;j<m;j++){
			if(now[j].score==now[j-1].score){
				now[j].rank[2]=now[j-1].rank[2];
			}else{
				now[j].rank[2]=j+1;
			}
			stu.push_back(now[j]);
		}
	}
	sort(stu.begin(),stu.end(),cmp);
	for(int i=0;i<stu.size();i++){
		if(i==0){
			stu[i].rank[0]=1;
		}else{
			if(stu[i].score==stu[i-1].score){
				stu[i].rank[0]=stu[i-1].rank[0];
			}else{
				stu[i].rank[0]=i+1;
			}
		}
	}
	cout<<sum<<endl;
	for(int i=0;i<stu.size();i++){
		cout<<stu[i].id;
		for(int j=0;j<3;j++){
			cout<<" "<<stu[i].rank[j];
		}
		cout<<endl;
	}
	
	return 0;
} 
