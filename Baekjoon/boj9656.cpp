// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> dp(n + 1);

//     dp[1] = 0;
//     dp[2] = 1;
//     dp[3] = 0;

//     for(int i = 4; i <= n; i++) {
//         if(min(dp[i - 1], dp[i - 3]) == 1) {
//             dp[i] = 0;
//         } else {
//             dp[i] = 1;
//         }
//     }

//     if(dp[n] == 0) {
//         cout << "CY" << endl;
//     } else {
//         cout << "SK" << endl;
//     }


//     return 0;
// }   