#include<bits/stdc++.h>
using namespace std;
bool judge(int y,int m,int d){
	if(y>2014||(y==2014&&m>9)||(y==2014&&m==9&&d>6)||y<1814||(y==1814&&m<9)||(y==1814&&m==9&&d<6)){
		return false;
	}
	return true;
}
int main(){
	int oldY=2015,oldM=13,oldD=40,youY=1800,youM=-1,youD=-1,y,m,d,n,count=0;
	string oldname,youname,name;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name;
		scanf("%d/%d/%d",&y,&m,&d);
		if(judge(y,m,d)){
			count++;
			if(y<oldY||(y==oldY&&m<oldM)||(y==oldY&&m==oldM&&d<oldD)){
				oldname=name;
				oldY=y;
				oldM=m;
				oldD=d;
			}
			if(y>youY||(y==youY&&m>youM)||(y==youY&&m==youM&&d>youD)){
				youname=name;
				youY=y;
				youM=m;
				youD=d;
			}
		}
	}
	if(count==0){
		cout<<0;
	}else{
		cout<<count<<" "<<oldname<<" "<<youname<<endl;
	}
	return 0;
}
