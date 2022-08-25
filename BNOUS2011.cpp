#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int n, k;
     int dp[1001][1001];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cin >> n >> k;
     memset(dp, 0, sizeof(dp));
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               cin >> dp[i][j];
               dp[i][j] = dp[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
          }
     }
     int MaxValue = 0;
     for (int i = k; i <= n; i++)
     {
          for (int j = k; j <= n; j++)
          {
               int S = dp[i][j] - dp[i][j - k] - dp[i - k][j] + dp[i - k][j - k];
               MaxValue = max(S, MaxValue);
          }
     }
     cout << MaxValue;
     return 0;
}