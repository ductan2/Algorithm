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
	int lcnt=0,ucnt=0;
	FOR(i,s.size()){
		if(s[i]>='a' && s[i]<='z'){
			lcnt++;
		}
		else ucnt++;
	}
	if(lcnt>=ucnt){
		transform(s.begin(),s.end(),s.begin(),[](char c){
			return tolower(c);	
		});
		cout<<s;	
	}
	else {
		transform(s.begin(),s.end(),s.begin(),[](char c){
			return toupper(c);	
		});
		cout<<s;
	}
	
}	