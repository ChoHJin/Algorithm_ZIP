// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// vector<int> dp;
// vector<int> stairs;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n;
//     int score;

//     cin >> n;

//     dp.resize(n);  

//     for(int i = 0; i < n; i++) {
//         cin >> score;
//         stairs.push_back(score);
//     }

//     dp[0] = stairs[0];
//     dp[1] = max(stairs[1], stairs[0] + stairs[1]);
//     dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);
    
//     for(int i = 3; i < n; i++) {
//         dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i]);
//     }

//     cout << dp[n - 1] << endl;
    
//     return 0;
// }
