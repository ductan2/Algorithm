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
	
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	int j=a.size()-1,i=0;
	int Sereja =0,Dima =0;
	int length=a.size()/2;
	while(i<=j){
		cout<<Sereja<<" "<<Dima<<" "<<a[i]<<" "<<a[j]<<endl;
		if(a[i]>=a[j]){
			Sereja+=a[i];
			i++;
		}
		else {
			Sereja+=a[j];
			j--;
		}
		if(a.size()%2!=0 && i >= j) break;
		if(a[i]>=a[j]){
			Dima+=a[i];
			i++;
		}
		else {
			Dima+=a[j];
			j--;
		}
	}
	cout<<Sereja<<" "<<Dima;
}	