#include<bits/stdc++.h>
using namespace std;
const int maxn=10010;
bool hashTable[maxn]={0};
int main(){
	int n;
	scanf("%d",&n);
	int sum,count=0;
	for(int i=1;i<=n;i++){
		sum=i/2+i/3+i/5;
		if(hashTable[sum]==false){
			count++;
			hashTable[sum]=true;
		}
	}
	printf("%d",count);
	return 0;
}
