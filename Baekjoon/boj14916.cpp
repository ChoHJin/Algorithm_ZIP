// #include <iostream>
// #include <algorithm>

// using namespace std;

// int dp[100000];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     dp[1] = -1;
//     dp[2] = 1;
//     dp[3] = -1;
    
//     dp[4] = 2;
//     dp[5] = 1;
//     dp[6] = 3;

//     dp[7] = 2;
//     dp[8] = 4;
//     dp[9] = 3;
    
//     // dp[10] = 2;
//     // dp[11] = 4;
//     // dp[12] = 3;

//     // dp[13] = 5;
//     // dp[14] = 4;
//     // dp[15] = 3;

//     // dp[16] = 5;
//     // dp[17] = 4;
//     // dp[18] = 6;
//     // dp[19] = 5;

//     for(int i = 9; i <= n; i++) {
//         dp[i] = dp[i - 5] + 1;
//     }

//     cout << dp[n] << endl;

//     return 0;
// }