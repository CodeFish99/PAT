#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int hashTable[maxn]={0};
int main(){
	int n,id,score,maxid,max=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>id>>score;
		hashTable[id]+=score;
	}
	for(int i=0;i<maxn;i++){
		if(hashTable[i]>max){
			max=hashTable[i];
			maxid=i;
		}
	}
	cout<<maxid<<" "<<max;
	return 0;
}
