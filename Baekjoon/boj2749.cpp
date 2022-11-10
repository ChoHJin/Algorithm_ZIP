// #include <iostream>
// #include <vector>

// using namespace std;

// vector<long long> dp;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long n;
//     int m = 1000000;
//     long long cnt = 2;

//     cin >> n;

//     dp.push_back(0);
//     dp.push_back(1);
    
//     while(1) {
//         dp.push_back((dp[cnt - 1] + dp[cnt - 2]) % m);
//         if(dp[cnt - 1] % m == 0 && dp[cnt] % m == 1) {
//             break;
//         }
//         cnt++;
//     }

//     cout << dp[n % (cnt - 1)] << endl;

//     return 0;
// }