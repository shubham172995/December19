
#include <bits/stdc++.h>
using namespace std;
struct{
    bool operator()(string a, string b)const{
	    return ((a+b).compare(b+a)>0);
    }
}lexic;

int main()
{
    vector<string> a(4);
    a[0]="666000";
    a[1]="666789";
    a[2]="6660";
    a[3]="666698712";
    sort(a.begin(), a.end(), lexic);
    for(int i=0;i<4;i++){
        cout<<a[i]<<" , ";
    }
    cout<<endl;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
struct{
    bool operator()(string a, string b)const{
	    return ((a+b).compare(b+a)>0);
    }
}lexic;

int main()
{
    /*vector<string> a(4);
    a[0]="666000";
    a[1]="666789";
    a[2]="6660";
    a[3]="666698712";*/
    vector<string> a={"6", "67", "7", "66", "5", "65"};
    sort(a.begin(), a.end(), lexic);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" , ";
    }
    cout<<endl;
    return 0;
}
