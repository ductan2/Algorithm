#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)



int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	string s;
	cin>>s;
	string t;
	vector<string>vs;
	FOR(i,s.size()){
		if(isdigit(s[i])){
			t+=s[i];
		}
	}
	sort(t.begin(),t.end());
	FOR(i,t.size()) {
		if(i==t.size()-1) {
			cout<<t[i];
			return 0;
		}
		cout<<t[i]<<"+";
	}
}	