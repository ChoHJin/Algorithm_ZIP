// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> dp;
// vector<int> glass;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int wine;

//     cin >> n;

//     dp.resize(n);

//     for(int i = 0; i < n; i++) {
//         cin >> wine;
//         glass.push_back(wine);
//     }

//     dp[0] = glass[0];
//     dp[1] = glass[0] + glass[1];
//     dp[2] = max(max(dp[1], dp[0] + glass[2]), glass[1] + glass[2]);

//     for(int i = 3; i < n; i++) {
//         dp[i] = max(max(dp[i - 1], dp[i - 2] + glass[i]), dp[i - 3] + glass[i - 1] + glass[i]);
//     }

//     cout << dp[n - 1] << endl;

//     return 0;
// }