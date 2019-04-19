#include<bits/stdc++.h>
using namespace std;
struct student{
	int id,grade;
	string name;
}temp;
vector<student> stu;
int flag;
bool cmp(student a,student b){
	if(flag==1){
		return a.id<b.id;
	}else if(flag==2){
		if(a.name!=b.name){
			return a.name<b.name;
		}else{
			return a.id<b.id;
		}
	}else{
		if(a.grade!=b.grade){
			return a.grade<b.grade;
		}else{
			return a.id<b.id;
		}
	}
}
int main(){
	int n;
	cin>>n>>flag;
	for(int i=0;i<n;i++){
		cin>>temp.id>>temp.name>>temp.grade;
		stu.push_back(temp);
	} 
	sort(stu.begin(),stu.end(),cmp);
	for(int i=0;i<n;i++){
		printf("%06d ",stu[i].id);
		cout<<stu[i].name<<" "<<stu[i].grade<<endl;
	}
	return 0;
}
