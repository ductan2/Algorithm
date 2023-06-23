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
	string s,t;
	cin>>s>>t;
	transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return tolower(c);
    });
    transform(t.begin(), t.end(), t.begin(), [](unsigned char c) {
        return tolower(c);
    });

	if(s.compare(t)>0) cout<<1;
	else if(s.compare(t)<0) cout<<-1;
	else cout<<0;

}	