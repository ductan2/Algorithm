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
	string s;
	cin>>s;
	
	transform(s.begin(),s.end(),s.begin(),[](char c){
		return tolower(c);
	});
	
//	transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
//        return tolower(c);
//    });
	vector<char>vc;
	FOR(i,s.size()){
		if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i'){
			
			vc.push_back(s[i]);
		}
	}
	
	FAR(x,vc){
		cout<<"."<<x;
	}
	
}	