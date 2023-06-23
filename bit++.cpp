#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)


bool containsDoublePlus(const std::string& str) {
    return (str.find("++") != std::string::npos);
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	
	int n;
	cin>>n;
	int x=0;
	FOR(i,n){
		string s;
		cin>>s;
		if(containsDoublePlus(s)==true){
			
			x++;
		}
		else x--;
	}

	cout<<x;
	
}	