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
	
	int n,k;cin>>n>>k;
	int cnt=0,res=0;
	vector<int>v;
	
	FOR(i,k){
		int x;cin>>x;
	
		if(x==0) {
			cout<<i;
			return 0;
		}	
		cnt=x;
	}
	
	FORI(i,n,k){
		int x;cin>>x;
		if(x!=cnt){
			cout<<i; return 0;
		}
	}
	
	cout<<n;
	
}	