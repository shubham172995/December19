#include<bits/stdc++.h>

int main(){
	int c, b;
	scanf("%d", &c);
	scanf("%d", &b);
	int a[4];
	a[1]=a[2]=a[3]=0;
	a[c]=a[b]=1;
	if(a[1]==0)
		printf("1\n");
	else if(a[2]==0)
		printf("2\n");
	else printf("3\n");
	return 0;
}