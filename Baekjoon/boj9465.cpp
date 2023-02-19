// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
        
//         cin >> n;

//         int dp[2][100001];
//         dp[0][0] = dp[1][0] = 0;

//         for(int i = 0; i < 2; i++) {
//             for(int j = 1; j <= n; j++) {
//                 cin >> dp[i][j];
//             }
//         }
        
//         for(int i = 2; i <= n; i++) {
//             dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + dp[0][i];
//             dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + dp[1][i];
//         }

//         int ans = max(dp[1][n], dp[0][n]);

//         cout << ans << endl;
        
//     }


//     return 0;
// }