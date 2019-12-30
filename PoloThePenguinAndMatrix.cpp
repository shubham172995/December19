#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, d;
	cin>>n>>m>>d;
	int temp=n*m;
	int min=INT_MAX, max=0;
	vector<int> a(n*m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[(i*m)+j];
			min=min<a[(i*m)+j]?min:a[(i*m)+j];
			max=max>a[(i*m)+j]?max:a[(i*m)+j];
		}
	}
	sort(a.begin(), a.end());
	int ans=0;
	bool flag=false;
	int check=a[0]%d;
	for(int i=1;i<temp;i++){
		if(a[i]%d!=check){
			flag=true;
			break;
		}
	}
	if(flag){
		cout<<"-1\n";
		return 0;
	}
	/*int h=0;
	for(int i=min;i<=max;i+=d){
		int count=0;
		for(int j=0;j<temp;j++){
			int k=abs(a[j]-i);
			count+=k/d;
		}
		if(ans>count)
			h=i;
		ans=ans<count?ans:count;
	}*/
	for(int i=0;i<temp;i++){
		a[i]-=check;
		a[i]/=d;
	}
	if(temp%2){
		check=a[temp/2];
		for(int i=0;i<temp;i++)
			ans+=abs(check-a[i]);
	}
	else{
		int count=0;
		check=a[temp/2];
		for(int i=0;i<temp;i++)
			count+=abs(check-a[i]);
		check=a[(temp/2)+1];
		for(int i=0;i<temp;i++)
			ans+=abs(check-a[i]);
		ans=ans<count?ans:count;
	}
	cout<<ans<<endl;
	return 0;
}