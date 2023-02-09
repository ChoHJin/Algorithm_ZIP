// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     long long dp[1000001];

//     cin >> t;

//     dp[0] = 0;
//     dp[1] = 1;
//     dp[2] = 2;
//     dp[3] = 4;
//     dp[4] = 7;

//     while(t--) {
//         int n;
//         cin >> n;

//         for(int i = 4; i <= n; i++) {
//             dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
//         }

//         cout << dp[n] << endl;
//     }

//     return 0;
// }