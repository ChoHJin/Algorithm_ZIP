// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<vector<int>> scores(n, vector<int>(3, 0));
//     vector<int> ans(n);

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             cin >> scores[i][j];
//         }
//     }

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < n; j++) {
//             int cnt = 0;

//             for(int k = 0; k < n; k++) {
//                 if(scores[j][i] == scores[k][i] && j != k) {
//                     cnt++;
//                 }
//             }

//             if(cnt == 0) {
//                 ans[j] += scores[j][i];
//             }
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         cout << ans[i] << endl;
//     }

//     return 0;
// }