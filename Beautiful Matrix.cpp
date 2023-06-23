#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)


int a[5][5];
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	int c,r;
	FOR(i,5){
		FOR(j,5){
			cin>>a[i][j];
			if(a[i][j]==1){
				r=i+1;c=j+1;	
			}
		}
	}
	int x=abs(r-3);
	int y=abs(c-3);
	cout<<x+y;
}	