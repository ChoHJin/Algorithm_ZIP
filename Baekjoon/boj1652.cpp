// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     char map[101][101];
//     int row = 0, col = 0;

//     cin >> n;

//     // 입력 받기
//     for(int i=0; i<n; i++){
//         string s;
//         cin >> s;
//         for(int j=0; j<n; j++){
//             map[i][j] = s[j];
//         }
//     }

//     // 가로 방향 검사
//     for(int i=0; i<n; i++){
//         int cnt = 0;
//         for(int j=0; j<n; j++){
//             if(map[i][j] == '.') {
//                 cnt++;
//             } else {
//                 if(cnt >= 2) row++;
//                 cnt = 0;
//             }
//         }
//         if(cnt >= 2) row++;
//     }

//     // 세로 방향 검사
//     for(int j=0; j<n; j++){
//         int cnt = 0;
//         for(int i=0; i<n; i++){
//             if(map[i][j] == '.') {
//                 cnt++;
//             } else {
//                 if(cnt >= 2) col++;
//                 cnt = 0;
//             }
//         }
//         if(cnt >= 2) col++;
//     }

//     cout << row << " " << col << endl;

//     return 0;
// }
