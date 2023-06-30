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
	int n;
	cin>>n;
	int cnt=0;
	FOR(i,n){
		char s;cin>>s;
		
		if(s=='A'){
			cnt++;
		}
		else cnt--;
	}
	if(cnt>0) cout<<"Anton"	;
	else if (cnt<0) cout<<"Danik";
	else cout<<"Friendship";
}	