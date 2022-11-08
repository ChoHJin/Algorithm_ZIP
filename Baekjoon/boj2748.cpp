// #include <iostream>
// #include <vector>

// using namespace std;

// vector<long long> dp;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     dp.push_back(0);
//     dp.push_back(1);
    
//     for(int i = 2; i <= n; i++) {
//         dp.push_back(dp[i - 1] + dp[i - 2]);
//     }

//     cout << dp[n] << endl;

//     return 0;
// }