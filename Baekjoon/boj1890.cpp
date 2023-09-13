// #include <iostream>

// using namespace std;

// long long dp[101][101];
// long long board[101][101];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> board[i][j];
//         }
//     }

//     dp[0][0] = 1;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             int tmp = board[i][j];

//             if(i != n - 1 && i + tmp < n) {
//                 dp[i + tmp][j] += dp[i][j];
//             }

//             if(j != n - 1 && j + tmp < n) {
//                 dp[i][j + tmp] += dp[i][j];
//             }
//         }
//     }

//     cout << dp[n - 1][n - 1] << endl;

//     return 0;
// }