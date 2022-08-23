// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int dp[16];
// pair<int, int> arr[16];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n;
//     int profit = 0;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i].first >> arr[i].second;
//     }

//     for(int i = 0; i <= n; i++) {
//         dp[i] = max(dp[i], profit);

//         if(arr[i].first + i  <= n) {
//             dp[arr[i].first + i] = max(dp[arr[i].first + i], arr[i].second + dp[i]);
//         }

//         profit = max(profit, dp[i]);
//     }

//     cout << profit << endl;

//     return 0;
// }