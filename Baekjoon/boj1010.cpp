// #include <iostream>
// #include <vector>

// using namespace std;


// int dp[31][31] = {0, };

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int w, e;   //w : west,  e : east

//     cin >> n;

//     // eCw = e-1 C w-1 + e-1 C w : 파스칼의 삼각형 이용
//     for(int i = 0; i < 31; i++) {
//         for(int j = 1; j < 31; j++) {
//             if(i == j || i == 0) {
//                 dp[i][j] = 1;
//             }
//             else {
//                 dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
//             }
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         cin >> w >> e;
//         cout << dp[w][e] << endl;
//     }

//     return 0;

// }