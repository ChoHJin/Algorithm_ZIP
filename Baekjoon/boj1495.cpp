// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, s, m;
//     cin >> n >> s >> m;

//     vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
//     dp[0][s] = true;

//     for(int i = 1; i <= n; i++) {
//         int v;
//         cin >> v;

//         for(int j = 0; j <= m; j++) {
//             if(dp[i - 1][j]) {
//                 if(j - v >= 0) {
//                     dp[i][j - v] = true;
//                 }
//                 if(j + v <= m) {
//                     dp[i][j + v] = true;
//                 }
//             }
//         }
//     }

//     int ans = -1;

//     for(int i = 0; i <= m; i++) {
//         if(dp[n][i]) {
//             ans = max(ans, i);
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }