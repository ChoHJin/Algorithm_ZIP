// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<int> dp(n + 1);

//     dp[0] = 1;
//     dp[1] = 1;
//     dp[2] = 2;

//     for(int i = 3; i <= n; i++) {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }

//     int idx = 1;
//     int ans = 1;

//     for(int i = 0; i < m; i++) {
//         int v;
//         cin >> v;

//         ans *= dp[v - idx];
//         idx = v + 1;
//     }

//     ans *= dp[n + 1 - idx];

//     cout << ans << endl;

//     return 0;
// }