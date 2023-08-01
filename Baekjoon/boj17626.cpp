// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> dp(n + 1, n);
    
//     dp[0] = 0;
//     dp[1] = 1;

//     for(int i = 2; i <= n; i++) {
//         for(int j = 1; j * j <= i; j++) {
//             dp[i] = min(dp[i], dp[i - j * j] + 1);
//         }
//     }

//     cout << dp[n] << endl;

//     return 0;
// }