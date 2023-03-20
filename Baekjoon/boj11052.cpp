// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     vector<pair<int, int>> card(n + 1);

//     for(int i = 1; i <= n; i++) {
//         int price;
//         cin >> price;
//         card[i] = {i, price};
//     }

//     vector<int> dp(n + 1);

//     dp[1] = card[1].second;

//     for(int i = 2; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             int sum = card[j].second + dp[i - j];

//             if(sum > dp[i]) {
//                 dp[i] = sum;
//             }
//         }
//     }

//     cout << dp[n] << endl;

//     return 0;
// }