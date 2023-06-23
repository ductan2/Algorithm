#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FOR(i,a) for(ll i=0;i<a;i++)
#define FAR(x,a) for(auto x:a)
int matrix[max_val][max_val];
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	
	
	int n;cin>>n;
	int res=0;
	FOR(i,n){
		int x,y,z;
		cin>>x>>y>>z;
		if(x+y+z>=2){
			res+=1;
		}
	}
	
	cout<<res;
}	