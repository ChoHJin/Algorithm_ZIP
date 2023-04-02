// #include <iostream>
// #define MOD 9901

// using namespace std;

// int dp[100001][3];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     dp[1][0] = dp[1][1] = dp[1][2] = 1; //초기값 설정

//     for(int i = 2; i <= n; i++) {
//         dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % MOD; //사자가 없는 경우
//         dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % MOD;    //왼쪽에 사자가 있는 경우
//         dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % MOD; //오른쪽에 사자가 있는 경우
//     }

//     cout << (dp[n][0] + dp[n][1] + dp[n][2]) % MOD << endl;

//     return 0;
// }