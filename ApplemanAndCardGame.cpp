#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	ll n, k;
	cin>>n>>k;
	vector<ll> a(26);
	lloop(i, 0, n){
		char ch;
		cin>>ch;
		++a[ch-'A'];
	}
	sort(a.begin(), a.end());
	//bool flag=false;
	ll ans=0;
	for(ll i=a.size()-1;i>=0;i--){
		//cout<<"Hey "<<a[i]<<endl;
		if(k==0)
			break;
		if(k>a[i]){
			ans+=a[i]*a[i];
			k-=a[i];
		}
		else{
			ans+=k*k;
			break;		
		}
	}
	cout<<ans<<endl;
	return 0;
}