#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FOR(i,a) for(ll i=0;i<a;i++)
#define FAR(x,a) for(auto x:a)

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	
	
	ll x,y,z;
	cin>>x>>y>>z;
	
	ll res=ceil(1.0*x/z)*ceil(1.0*y/z);
	cout<<res;
	
}	