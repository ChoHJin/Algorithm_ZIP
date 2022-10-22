// #include <iostream>
// #include <cstring>

// using namespace std;

// int apt[15][15];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t, k, n;

//     cin >> t;

//     // for(int i = 0; i < t; i++) {
//     //     memset(apt, 0, sizeof(apt));
//     //     cin >> k >> n;

//     //     for(int i = 1; i <= n; i++) {
//     //         apt[0][i] += i;
//     //     }

//     //     for(int i = 1; i <= k; i++) {
//     //         for(int j = 1; j <= n; j++) {
//     //             for(int x = 1; x <= j; x++) {
//     //                 apt[i][j] += apt[i - 1][x];
//     //             }
//     //         }
//     //     }

//     //     cout << apt[k][n] << endl;
    
//     // }

//     //DP 풀이
//     //점화식 : apt[k][n] = apt[k][n - 1] + apt[k - 1][n]
//     // while(t--) {
//     //     memset(apt, 0, sizeof(apt));

//     //     cin >> k >> n;

//     //     for(int i = 1; i <= n; i++) {
//     //         apt[0][i] += i;
//     //     }

//     //     for(int i = 1; i <= k; i++) {
//     //         for(int j = 1; j <= n; j++) {
//     //             apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
//     //         }
//     //     }

//     //     cout << apt[k][n] << endl;
//     // }

//     return 0;
// }