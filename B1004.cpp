#include<bits/stdc++.h>
using namespace std;
int main(){
	string maxname,maxnum,minname,minnum,name,num;
	int n,max=-1,min=101,score;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name>>num>>score;
		if(score>max){
			max=score;
			maxname=name;
			maxnum=num;
		}
		if(score<min){
			min=score;
			minname=name;
			minnum=num;
		}
	}
	cout<<maxname<<" "<<maxnum<<endl<<minname<<" "<<minnum<<endl;
	return 0;
}
