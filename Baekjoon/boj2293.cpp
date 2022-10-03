// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v;
// vector<int> dp;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;

//     cin >> n >> k;

//     v.resize(n);
//     dp.resize(k + 1);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     //점화식 : dp[i] = dp[i] + dp[i - k];
//     dp[0] = 1;  //아무런 동전도 사용하지 않는 방법 1

//     for(int i = 0; i < n; i++) {
//         for(int j = v[i]; j <= k; j++) {
//             dp[j] += dp[j - v[i]];  
//         }
//     }

//     cout << dp[k] << endl;

//     return 0;
// }