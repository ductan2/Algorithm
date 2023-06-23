#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a) for(ll i=0;i<a;i++)
#define FAR(x,a) for(auto x:a)
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	vector<string>v;
	int n;cin>>n;
	FOR(i,n){
		string s;cin>>s;
		v.push_back(s);
	}
	FAR(x,v){
		if(x.size()>10){
			cout<<x[0]<<x.size()-2<<x[x.size()-1]<<endl;
		}
		else cout<<x<<endl;
	}
}	