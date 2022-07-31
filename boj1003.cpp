// #include <iostream>

// using namespace std;

// int dp[41] = {0, 1,};

// int main() {
//     int t, n;

//     cin >> t;

//     for(int i = 3; i < 41; i++) {
//         dp[i] = dp[i - 2] + dp[i - 1];
//     }

//     for(int i = 0; i < t; i++) {
//         cin >> n;
        
//         if(n == 0) {
//             cout << "1 0" << endl;
//         }
//         else if (n == 1) {
//             cout << "0 1" << endl;
//         }
//         else {
//             cout << dp[n - 1] << " " << dp[n] << endl;
//         }
//     }
// }
