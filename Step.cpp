#include <bits/stdc++.h>
using namespace std;
const int MOD = 14062008;
typedef long long ll;
int n, k, a[100001], dp[100001];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cin >> n >> k;
     for (int i = 1; i <= k; i++)
     {
          cin >> a[0];
          a[a[0]] = 1;
          //  cout << a[a[0]] << " " << a[i];
     }
     dp[1] = 1;
     cout << endl;
     for (int i = 2; i <= n; i++)
     {
          // cout << a[i] << " ";
          if (a[i] == 0)
          {
               dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
          }
     }
     cout << dp[n];
}