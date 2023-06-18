// #include <iostream>
// #include <vector>

// using namespace std;

// pair<int, vector<int>> makeOne(int n) {
//     vector<int> dp(n + 1, 0);
//     vector<int> prev(n + 1, 0);

//     for(int i = 2; i <= n; i++) {
//         dp[i] = dp[i - 1] + 1;
//         prev[i] = i - 1;

//         if(i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
//             dp[i] = dp[i / 2] + 1;
//             prev[i] = i / 2;
//         }

//         if(i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
//             dp[i] = dp[i / 3] + 1;
//             prev[i] = i / 3;
//         }
//     }

//     vector<int> v;
//     int cur = n;

//     while(cur != 1) {
//         v.push_back(cur);
//         cur = prev[cur];
//     }
//     v.push_back(1);

//     return make_pair(dp[n], v);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     pair<int, vector<int>> ans = makeOne(n);

//     cout << ans.first << endl;

//     for(int i = 0; i < ans.second.size(); i++) {
//         cout << ans.second[i] << " ";
//     }
    
//     return 0;
// }