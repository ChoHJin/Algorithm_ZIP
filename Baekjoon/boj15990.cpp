// #include <iostream>
// #include <vector>

// #define MOD 1000000009
// #define MAX 100000

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;

//     vector<vector<long long>> dp(MAX + 1, vector<long long>(4, 0));
    
//     dp[1][1] = 1;
//     dp[2][2] = 1;
//     dp[3][1] = 1;
//     dp[3][2] = 1;
//     dp[3][3] = 1;

//     for (int i = 4; i <= MAX; ++i) {
//         dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % MOD;
//         dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MOD;
//         dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % MOD;
//     }

//     while (T--) {
//         int n;
//         cin >> n;
//         cout << (dp[n][1] + dp[n][2] + dp[n][3]) % MOD << "\n";
//     }

//     return 0;
// }