#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	/*std::vector<char> a(n), b(n), c(2*n);
	for(int i=0;i<n;i++)
		scanf("%c", &a[i]);
	for(int i=0;i<n;i++)
		scanf("%c", &b[i]);
	*/
	std::string a, b, c;
	std::cin>>a>>b;
	for(int i=0;i<n;i++){
		c+=a[i];
		c+=b[i];
	}
	std::cout<<c<<std::endl;
	return 0;
}