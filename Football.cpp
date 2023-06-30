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
	
	string s;cin>>s;
	int cnt=1,isCheck=0;
	for(int i=1;i<s.size()	;i++){
		if(s[i]==s[i-1]){
			cnt++;
			isCheck=max(cnt,isCheck);
			if(isCheck==7){
				cout<<"YES";
				return 0;
			}
		}
		else cnt=1;
	}
	cout<<"NO";
	
}	