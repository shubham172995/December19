#include<bits/stdc++.h>
using namespace std;
#define mo 1000000007

int main(){
	long long int x, y;
	cin>>x>>y;
	long long int a, b, c, d;
	a=b=c=d=0;
	a=y-x;
	b=-x;
	c=-y;
	d=x-y;
	while(x<0)
		x+=mo;
	while(y<0)
		y+=mo;
	while(a<0)
		a+=mo;
	while(b<0)
		b+=mo;
	while(c<0)
		c+=mo;
	while(d<0)
		d+=mo;
	long long int n;
	cin>>n;
	--n;
	n=n%6;
	if(n==0)
		cout<<x%mo<<endl;
	else if(n==1)
		cout<<y%mo<<endl;
	else if(n==2)
		cout<<a%mo<<endl;
	else if(n==3)
		cout<<b%mo<<endl;
	else if(n==4)
		cout<<c%mo<<endl;
	else if(n==5)
		cout<<d%mo<<endl;
	return 0;
}