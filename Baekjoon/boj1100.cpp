// #include <iostream>

// using namespace std;

// char map[8][8];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for(int i = 0; i < 8; i++) {
//         for(int j = 0; j < 8; j++) {
//             cin >> map[i][j];
//         }
//     }

//     int ans = 0;

//     for(int i = 0; i < 8; i++) {
//         for(int j = i % 2; j < 8; j += 2) {
//             if(map[i][j] == 'F') {
//                 ans++;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }