// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     int dp[1005][1005] = {0, };

//     for(int i = 1; i <= n; i++) {
//         for(int j = 0; j <= i; j++) {
//             if(i == j || j == 0) {
//                 dp[i][j] = 1;
//                 continue;
//             }

//             dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
//         }
//     }

//     cout << dp[n][m] << endl;

//     return 0;
// }