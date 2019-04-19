#include<bits/stdc++.h>
using namespace std;
int main(){
	string name,id,Mname,Mid,Fname,Fid,gender;
	int score,maxScore=-1,minScore=101,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name>>gender>>id>>score;
		if(gender=="M"){
			if(score<minScore){
				minScore=score;
				Mname=name;
				Mid=id;
			}
		}else{
			if(score>maxScore){
				maxScore=score;
				Fname=name;
				Fid=id;
			}
		}
	}
	if(Fname==""){
		cout<<"Absent"<<endl;
	}else{
		cout<<Fname<<" "<<Fid<<endl;
	}
	if(Mname==""){
		cout<<"Absent"<<endl;
	}else{
		cout<<Mname<<" "<<Mid<<endl;
	}
	if(Fname==""||Mname==""){
		cout<<"NA"<<endl;
	}else{
		cout<<maxScore-minScore<<endl;
	}
	return 0;
} 
