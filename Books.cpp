#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)

vector<int>a;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	ll n,t;cin>>n>>t;
	FOR(i,n){
		int x;cin>>x;
		a.push_back(x);
	}
	int j=-1,ans=0;
	ll sum=0;
	FOR(i,n){
		if(sum+a[i]<=t){
			sum+=a[i];
		}
		else {
			sum+=a[i];
			while(sum>t){
				j++;
				sum-=a[j];
			}
		}
		int t=i-j;
		ans=max(ans,t); // i - j là tổng số cuốn sách lớn nhất có thể đọc được
	}
	cout<<ans;
}	