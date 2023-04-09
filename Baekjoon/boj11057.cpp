// #include <iostream>
// #define MOD 10007

// using namespace std;

// int dp[1001][10];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     //1자리 수 1로 초기화
//     for(int i = 0; i < 10; i++) {
//         dp[1][i] = 1;
//     }

//     //2자리 수 부터 계산
//     for(int i = 2; i <= n; i++) {
//         for(int j = 0; j < 10; j++) {
//             for(int k = 0; k <= j; k++) {
//                 dp[i][j] += dp[i - 1][k];
//                 dp[i][j] %= MOD;
//             }
//         }
//     }

//     int ans = 0;

//     for(int i = 0; i < 10; i++) {
//         ans += dp[n][i];
//         ans %= MOD;
//     }

//     cout << ans << endl;

//     return 0;
// }