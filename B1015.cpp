#include<bits/stdc++.h>
using namespace std;
struct student{
	string id;
	int d,c,sum;
}temp;
vector<student> stu[4];
bool cmp(student a,student b){
	if(a.sum!=b.sum) return a.sum>b.sum;
	else if(a.d!=b.d) return a.d>b.d;
	else return a.id<b.id;
}
int main(){
	int n,l,h,cnt=0;
	cin>>n>>l>>h;
	for(int i=0;i<n;i++){
		cin>>temp.id;
		scanf("%d %d",&temp.d,&temp.c);
		temp.sum=temp.d+temp.c;
		if(temp.d>=l&&temp.c>=l){
			cnt++;
			if(temp.d>=h&&temp.c>=h){
				stu[0].push_back(temp);
			}else if(temp.d>=h&&temp.c<h){
				stu[1].push_back(temp);
			}else if(temp.d<h&&temp.c<h&&temp.d>=temp.c){
				stu[2].push_back(temp);
			}else{
				stu[3].push_back(temp);
			}
		}
	}
	for(int i=0;i<4;i++){
		sort(stu[i].begin(),stu[i].end(),cmp);
	}
	cout<<cnt<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<stu[i].size();j++){
			temp=stu[i][j];
			cout<<temp.id<<" "<<temp.d<<" "<<temp.c<<endl;
		}
	}
	return 0;
} 
