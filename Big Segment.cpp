#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<vector<pair<int,innt>>>v;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}
}