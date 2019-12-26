#include<bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long int n, ans=0, temp=10;
	cin>>n;
	if(n%2){
		cout<<"0\n";
		return 0;
	}
	while(1){
		if(n/temp==0)
			break;
		ans+=n/temp;
		temp=temp*5;
	}
	cout<<ans<<endl;
	return 0;
}