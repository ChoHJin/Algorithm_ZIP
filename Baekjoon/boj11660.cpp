// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
//     vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cin >> arr[i][j];
            
//             dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j];
//         }
//     }

//     for(int i = 0; i < m; i++) {
//         int x1, y1, x2, y2;
//         cin >> x1 >> y1 >> x2 >> y2;

//         int ans = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
        
//         cout << ans << '\n';
//     }

//     return 0;
// }