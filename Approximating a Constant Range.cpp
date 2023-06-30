#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_val=1000;
#define FAR(x,a) for(auto x:a)
#define FORI(i,a,s) for(ll i=s;i<a;i++)
#define FOR(i,a) for(ll i=0;i<a;i++)
int fre[100001];
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	
	int n;cin>>n;
	vector<int>a(n);
	FOR(i,n){
		cin>>a[i];
	}
	int j = 0, diff = 0;
    int longest_range = 0;

    for (int i = 0; i < n; i++) {
        if (fre[a[i]] == 0) {
            diff++;
        }
//        11
//		5 4 5 5 6 7 8 8 8 7 6
        fre[a[i]]++;
		cout<<a[i]<<" "<<fre[a[i]]<<endl;
        while (j < n && diff > 2) {
        	cout<<"A[j]="<<fre[a[j]]<<endl;
            if (fre[a[j]] == 1) {
                diff--;
            }
            cout<<"Trong while: "<<a[j]<<" "<<diff<<endl;
            fre[a[j]]--;
            j++;
        }

        longest_range = max(longest_range, i - j + 1);
    }

    cout << longest_range;
	
}	