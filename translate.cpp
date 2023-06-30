#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)


int a[1001][1001];
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	string s,t;
	cin>>s>>t;
	FOR(i,s.size()){
		
		if(s[i]!=t[s.size()-i-1]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	
}	