// #include <iostream>

// using namespace std;

// int dp[501][501];
// int ans;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int k = -1;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j <= i; j++) {
//             cin >> dp[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j <= n - i; j++) {
//             dp[n - i - 1][j] += max(dp[n - i][j], dp[n - i][j + 1]);
//         }
//     }

//     cout << dp[0][0] << endl;

//     return 0;
// }