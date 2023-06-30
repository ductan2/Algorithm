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
	
	int n;cin>>n;
	int x=0,y=0,z=0;
	FOR(i,n){
		int a,b,c;
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		c+=c;
	}
	if(x==0 && y==0 && z==0){
		cout<<"YES";
	}
	else cout<<"NO";
}	