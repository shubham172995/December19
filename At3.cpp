#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
	if(b==0)
		return a;
	return gcd(b, a%b);
}

int main(){
	long long a, b;
	cin>>a>>b;
	long long c=gcd(a, b);
	long long ans=a*b;
	ans=ans/c;
	cout<<ans<<endl; 
	return 0;
}