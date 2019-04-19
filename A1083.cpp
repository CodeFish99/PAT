#include<bits/stdc++.h>
using namespace std;
struct student{
	string name,id;
	int score;
}temp;
vector<student> stu;
bool cmp(student a,student b){
	return a.score>b.score;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp.name>>temp.id>>temp.score;
		stu.push_back(temp);
	}
	sort(stu.begin(),stu.end(),cmp);
	int left,right;
	bool flag=true;
	cin>>left>>right;
	for(int i=0;i<stu.size();i++){
		if(stu[i].score>=left&&stu[i].score<=right){
			cout<<stu[i].name<<" "<<stu[i].id<<endl;
			flag=false;
		}
	}
	if(flag) cout<<"NONE"<<endl;
	return 0;
} 
