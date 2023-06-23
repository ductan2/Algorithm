#include<bits/stdc++.h>
using namespace std;
int min_val=1e9,max_val=0;
int main(){
	int n;cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		min_val=min(min_val,x);
		max_val=max(max_val,y);
		v.push_back({x,y});
	}
	cout<<min_val<<" "<<max_val<<endl;
	int i=0;
	for(auto x:v){
		i++;
		if(x.first==min_val && x.second==max_val){
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
}