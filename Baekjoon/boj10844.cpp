// #include <iostream>

// using namespace std;

// int dp[101][10];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     long long mod = 1000000000;

//     cin >> n;

//     for(int i = 1; i < 10; i++) {
//         dp[1][i] = 1;   //길이가 1일때, i로 끝나는 계단수는 1개
//     }

//     for(int i = 2; i <= n; i++) {
//         for(int j = 0; j < 10; j++) {
//             if(j == 0) {
//                 dp[i][j] = dp[i - 1][j + 1];
//             }
            
//             else if(j == 9) {
//                 dp[i][j] = dp[i - 1][j - 1];
//             }

//             else {
//                 dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
//             }

//             dp[i][j] %= mod;
//         }
//     }

//     int ans = 0;
//     for(int i = 0; i < 10; i++) {
//         ans = (ans + dp[n][i]) % mod;
//     }

//     //ans %= mod;

//     cout << ans << endl;

//     return 0;
// }