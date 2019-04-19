#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[100]="-1.2E+10";
	int e;
	double db;
	sscanf(str,"%[^E]E%d",&db,&e);
	cout<<db<<endl<<e<<endl;
	return 0;
}
