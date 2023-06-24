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
	
	
	int a,b;
	cin>>a>>b;
	int i=0;
	while(1){
		i++;
		a*=3;
		b*=2;
		if(a>b){
			cout<<i;
			return 0;
		}
	}
	
}	