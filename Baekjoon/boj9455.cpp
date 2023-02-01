// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;

//     cin >> t;

//     while(t--) {
//         int m, n;
//         int ans = 0;

//         int map[100][100];

//         cin >> m >> n;

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 cin >> map[i][j];
//             }
//         }

//         for(int i = 0; i < n; i++) {
//             int cnt = 0;
//             for(int j = m - 1; j >= 0; j--) {
//                 if(map[j][i] == 0) {
//                     cnt++;
//                 }
//                 else ans += cnt;
//             }
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }