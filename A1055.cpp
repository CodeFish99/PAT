#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
struct person{
	char name[20];
	int age,money;
}temp;
bool cmp(person a,person b){
	if(a.money!=b.money)return a.money>b.money;
	else if(a.age!=b.age) return a.age<b.age;
	else return strcmp(a.name,b.name)<0;
	
}
vector<person> ps,valid;
int age[maxn]={0};
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%s %d %d",temp.name,&temp.age,&temp.money);
		ps.push_back(temp);
	}
	sort(ps.begin(),ps.end(),cmp);
	for(int i=0;i<n;i++){
		if(age[ps[i].age]<100){
			valid.push_back(ps[i]);
		}
	}
	for(int i=0;i<m;i++){
		int max,Amin,Amax,cnt=0;
		cin>>max>>Amin>>Amax;
		cout<<"Case #"<<i+1<<':'<<endl;
		for(int j=0;j<valid.size();j++){
			if(valid[j].age>=Amin&&valid[j].age<=Amax&&cnt<max){
				printf("%s %d %d\n",valid[j].name,valid[j].age,valid[j].money);
				cnt++;
			}
		}
		if(cnt==0) cout<<"None"<<endl;
	}
	return 0;
}
