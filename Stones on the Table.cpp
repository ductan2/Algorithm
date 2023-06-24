#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)


char a[50];
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int n;cin>>n;
	cin>>a[0];
	int cnt=0;
	for(int i=1;i<n;i++){
		 cin>>a[i];
		if(a[i-1]==a[i]){
			cnt++;
		}
	}
	cout<<cnt;
	
}	