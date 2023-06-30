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
	int n,k;
	cin>>n>>k;
	vector<int>arr;
	set<int>se;
	for(int i=0;i<n;i++) {
		int x;cin>>x;
		arr.push_back(x);
	}
	int st=-1,end=-1;
	int cnt=1;
	for(int i=0;i<n;i++){
		se.insert(arr[i]);
		if(se.size()==k){
			end=i+1;break;
		}
	}
	cnt=1;
	se.clear();
	for(int i=end;i>=0;i--){
		se.insert(arr[i]);
		if(se.size()==k){
			st=i+1;break;
		}
	}	
	cout<<st<<" "<<end;
	
}	