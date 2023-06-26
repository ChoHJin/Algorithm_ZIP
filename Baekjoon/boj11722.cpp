// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int dp[1001];
// int a[1001];
// int ans;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     for(int i = n - 1; i >= 0; i--) {
//         dp[i] = 1;  // 가장긴 수열이 1일 수도 있으므로 dp를 1로 초기화

//         for(int j = n - 1; j > i; j--) {
//             if(a[i] > a[j]) {
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }
//         ans = max(ans, dp[i]);
//     }

//     cout << ans << endl;


//     return 0;
// }