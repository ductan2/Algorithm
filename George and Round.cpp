#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)

vector<int>v,t;

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int n,m;
	cin>>n>>m;
	FOR(i,n) {
		int x;cin>>x;
		v.push_back(x);
	}
	FOR(i,m){
		int x;cin>>x;
		t.push_back(x);
	}	
	int cnt=0;
	int i=n-1,j=m-1;
	while(i>=0){
		if(t[j]>=v[i]){
			j--;i--;
			cnt++;
		}else {
			i--;
		}
	}
	cout<<v.size()-cnt;
	

}	