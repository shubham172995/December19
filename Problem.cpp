#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	//scanf("%d", &n);
	//std::cin.ignore();
	std::vector<std::string> a(6), b(6);
	int max=0;
	/*for(int i=0;i<n;i++){
		cin>>a[i];
		max=max>a[i].length()?max:a[i].length();
	}*/
	a={"6", "67", "7", "66", "56", "65"};
	/*a[0]="666789";
	a[1]="666000";
	a[2]="666698712";
	a[3]=""*/
	max=9;
	int in=0;
	for(int i=0;i<max;i++){
	    if(a.size()==0){
	        break;
	    }
	    std::map<int, std::vector<std::string> > m;
		for(int j=0;j<a.size();j++){
			if(i>=a[j].length()){
				m[a[j][a[j].length()-1-'0']].push_back(a[j]);
			}
			else m[a[j][i]-'0'].push_back(a[j]);
		}
		if(i==3){
		    cout<<m[7][0]<<" "<<m[6][0]<<" "<<m[0][0]<<endl;
		}
		//cout<<m[6][2]<<endl;
		a.erase(a.begin(), a.end());
		for(int l=9;l>=0;l--){
			if(m[l].size()==1){
				b[in]=m[l][0];
				++in;
			}
			else if(m[l].size()>=2){
			    for(int t=0;t<m[l].size();t++)
				    a.push_back(m[l][t]);
			}
			//cout<<a[1]<<endl;
		}
	}
	for(int i=0;i<n;i++){
		std::cout<<b[i]<<" , ";
	}
	std::cout<<std::endl;
	return 0;
}