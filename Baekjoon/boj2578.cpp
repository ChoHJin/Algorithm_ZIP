// #include <iostream>

// using namespace std;

// int map[6][6];
// int n, cnt;

// bool checkBingo() {
//     cnt = 0;

//     //가로영역 빙고 체크
//     for(int i = 0; i < 5; i++) {
//         int sum = 0;

//         for(int j = 0; j < 5; j++) {
//             sum += map[i][j];
//         }

//         if(sum == 0) {
//             cnt++;
//         }
//     }

//     //세로 영역
//     for(int i = 0; i < 5; i++) {
//         int sum = 0;

//         for(int j = 0; j < 5; j++) {
//             sum += map[j][i];
//         }
//         if(sum == 0) {
//             cnt++;
//         }
//     }

//     //대각선 영역 [0][0] ~ [4][4]
//     int drag = 0;
//     for(int i = 0; i < 5; i++) {
//         drag += map[i][i];
//     }

//     if(drag == 0) {
//         cnt++;
//     }

//     drag = 0;
//     //[0][4] ~ [4][0]
//     for(int i = 0; i < 5; i++) {
//         drag += map[i][4 - i];
//     }
//     if(drag == 0) {
//         cnt++;
//     }

//     if(cnt >= 3) {
//         return true;
//     }
//     else 
//         return false;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 5; j++) {
//             cin >> map[i][j];
//         }
//     }

//     for(int i = 0; i < 25; i++) {
//         cin >> n;
//         for(int j = 0; j < 5; j++) {
//             for(int k = 0; k < 5; k++) {
//                 if(n == map[j][k]) {
//                     map[j][k] = 0;
//                 }
//             }
//         }

//         if(checkBingo()) {
//             cout << i + 1 << endl;
//             break;
//         }
//     }

//     return 0;   
// }