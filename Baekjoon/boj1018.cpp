// #include <iostream>

// using namespace std;

// char white[8][8] = {    //흰색으로 시작하는 체스판
//     'W','B','W','B','W','B','W','B',
//     'B','W','B','W','B','W','B','W',
//     'W','B','W','B','W','B','W','B',
//     'B','W','B','W','B','W','B','W',
//     'W','B','W','B','W','B','W','B',
//     'B','W','B','W','B','W','B','W',
//     'W','B','W','B','W','B','W','B',
//     'B','W','B','W','B','W','B','W'
// };

// char black[8][8] = {    //검은색으로 시작하는 체스판
//     'B','W','B','W','B','W','B','W',
//     'W','B','W','B','W','B','W','B',
//     'B','W','B','W','B','W','B','W',
//     'W','B','W','B','W','B','W','B',
//     'B','W','B','W','B','W','B','W',
//     'W','B','W','B','W','B','W','B',
//     'B','W','B','W','B','W','B','W',
//     'W','B','W','B','W','B','W','B'
// };

// int wCnt = 0;
// int bCnt = 0;

// int main() {
//     int n, m;
//     int lim = 64;
//     char board[52][52];
//     cin >> n >> m;
    
//     //체스판 입력
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> board[i][j];
//         }
//     }

//     for(int i = 0; i <= n - 8; i++) {
//         for(int j = 0; j <= m - 8; j++) {
//             for(int x = 0; x < 8; x++) {
//                 for(int y = 0; y < 8; y++) {
//                     if(board[i + x][j + y] != white[x][y]) {
//                         wCnt++;
//                     }
//                     if(board[i + x][j + y] != black[x][y]) {
//                         bCnt++;
//                     }
//                 }
//             }
//             if(wCnt < bCnt) {
//                 if(lim > wCnt) {
//                     lim = wCnt;
//                 }
//             }
//             else {
//                 if(lim > bCnt) {
//                     lim = bCnt;
//                 }
//             }
//             wCnt = 0;
//             bCnt = 0;
//         }
//     }
//     cout << lim << endl;

//     return 0;   
    
// }