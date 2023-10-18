// #include <iostream>

// using namespace std;

// int dp[1001];
// int map[1001];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int ans = 1;

//     for(int i = 0; i < n; i++) {
//         cin >> map[i];
//         dp[i] = 1;
//     }

//     for(int i = 1; i < n; i++) {
//         int tmp = 0;
//         int idx = i;

//         for(int j = 0; j < i; j++) {
//             if(map[j] < map[i]) {
//                 if(dp[j] > tmp) tmp = dp[j];
//             }
//         }
//         dp[i] += tmp;
//         ans = max(ans, dp[i]);
//     }

//     cout << ans << endl;

//     return 0;
// }