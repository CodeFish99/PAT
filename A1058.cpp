#include<bits/stdc++.h>
using namespace std;
int main(){
	long long g1,s1,k1,g2,s2,k2;
	long long sum1,sum2,sum;
	scanf("%lld.%lld.%lld %lld.%lld.%lld",&g1,&s1,&k1,&g2,&s2,&k2);
	sum1=g1*17*29+s1*29+k1;
	sum2=g2*17*29+s2*29+k2;
	sum=sum1+sum2;
	printf("%lld.%lld.%lld",sum/(17*29),sum%(17*29)/29,sum%29);
	return 0;
}
