// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v(n + 1);
//     vector<int> dp(n + 1);

//     for(int i = 1; i <= n; i++) {
//         cin >> v[i];
//         dp[i] = v[i];
//     }

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             dp[i] = min(dp[i], dp[i - j] + v[j]);
//         }
//     }

//     cout << dp[n] << endl;

//     return 0;
// }