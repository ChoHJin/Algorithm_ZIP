// #include <iostream>

// using namespace std;

// int n;
// int cnt[3];     //-1, 0, 1 의 개수를 세기 위한 배열
// int paper[2187][2187];

// void solve(int x, int y, int size) {
//     if (size == 1) {
//         cnt[paper[x][y] + 1]++;
//         return;
//     }

//     bool flag = true;

//     for (int i = x; i < x + size; i++) {
//         for (int j = y; j < y + size; j++) {
//             if (paper[i][j] != paper[x][y]) {   //하나라도 다르면 false
//                 flag = false;
//                 break;
//             }
//         }
//         if (!flag) {
//             break;
//         }
//     }

//     if (flag) {
//         cnt[paper[x][y] + 1]++;     //숫자가 모두 같으면 해당 숫자의 카운트 증가
//     } else {
//         int nextSize = size / 3;    //범위를 3으로 나눠준다.
        
//         for (int i = x; i < x + size; i += nextSize) {
//             for (int j = y; j < y + size; j += nextSize) {
//                 solve(i, j, nextSize);  //범위를 9개로 나눠서 재귀호출
//             }
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> paper[i][j];
//         }
//     }
    
//     solve(0, 0, n);
    
//     for (int i = 0; i < 3; i++) {
//         cout << cnt[i] << '\n';
//     }

//     return 0;
// }