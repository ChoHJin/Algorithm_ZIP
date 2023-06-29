// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int checkCandy(vector<string>& board, int n) {
//     int maxCandy = 1;   //최소 1개의 사탕은 먹을 수 있음

//     //행 기준으로 연속한 사탕 개수 체크
//     for(int i = 0; i < n; i++) {
//         int cnt = 1;    //현재 행에서 연속한 사탕 개수

//         for(int j = 1; j < n; j++) {
//             if(board[i][j] == board[i][j - 1]) {
//                 cnt++;  //사탕 개수 증가
//             } else {
//                 maxCandy = max(maxCandy, cnt);  //최대 사탕 개수 갱신
//                 cnt = 1;    //새로운 연속한 사탕 개수로 초기화
//             }
//         }
//         maxCandy = max(maxCandy, cnt);  //마지막으로 갱신된 사탕 개수를 확인
//     }

//     //열 기준으로 연속한 사탕 개수 체크
//     for(int j = 0; j < n; j++) {
//         int cnt = 1;

//         for(int i = 1; i < n; i++) {
//             if(board[i][j] == board[i - 1][j]) {
//                 cnt++;
//             } else {
//                 maxCandy = max(maxCandy, cnt);
//                 cnt = 1;
//             }
//         }
//         maxCandy = max(maxCandy, cnt);
//     }

//     return maxCandy;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
    
//     cin >> n;

//     vector<string> board(n);

//     for(int i = 0; i < n; i++) {
//         cin >> board[i];
//     }

//     int ans = 0;

//     //사탕 위치 교환하고 최대 사탕 개수 확인
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n - 1; j++) {
//             //가로로 인접한 사탕 위치 교환
//             swap(board[i][j], board[i][j + 1]);
//             ans = max(ans, checkCandy(board, n));
//             swap(board[i][j], board[i][j + 1]);

//             //세로로 인접한 사탕 위치 교환
//             swap(board[j][i], board[j + 1][i]);
//             ans = max(ans, checkCandy(board, n));
//             swap(board[j][i], board[j + 1][i]);
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }