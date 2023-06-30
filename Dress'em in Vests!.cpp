#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)

vector<int>a,b;
vector<pair<int,int>>v;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	
	ll n,t,x,y;cin>>n>>t>>x>>y;
	
	FOR(i,n){
		ll c;cin>>c;a.push_back(c);
	}
	FOR(i,t){
		ll c;cin>>c;b.push_back(c);
	}
	
	ll i=0,j=0;
	ll cnt=0;

	while(i<n && j <t){
		ll start=a[i]-x,end=a[i]+y;
//		cout<<a[i]<<" "<<b[j]<<endl;
		if(start<= b[j] && b[j]<=end){
			i++;j++;
			cnt++;
			v.push_back({i,j});
		}
		else if(b[j]>end) {	
			i++;
		}
		else if(start >b[j]){
			j++;
		}
	}
	cout<<cnt<<endl;
	FAR(x,v) cout<<x.first<<" "<<x.second<<endl;
	
	
}	