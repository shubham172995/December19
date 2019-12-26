#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	vector<long long int> a(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int broken=0;
	for(int i=1;i<=n;i++){
		if(i-broken==a[i])
			continue;
		else ++broken;
	}
	if(broken==n)
		cout<<"-1\n";
	else cout<<broken<<endl;
	return 0;
}