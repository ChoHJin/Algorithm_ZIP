// #include <iostream>
// #include <cstdio>

// using namespace std;

// int arrA[51][51];
// int arrB[51][51];

// int n, m;

// bool reverseArr(int x, int y) {
//     if(x + 3 > n || y + 3 > m) {
//         return false;
//     }

//     for(int i = x; i < x + 3; i++) {
//         for(int j = y; j < y + 3; j++) {
//             arrA[i][j] = !arrA[i][j];
//         }
//     }
//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int cnt = 0;

//     scanf("%d %d", &n, &m);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             scanf("%1d", &arrA[i][j]);
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             scanf("%1d", &arrB[i][j]);
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             if(arrA[i][j] != arrB[i][j]){
//                 if(reverseArr(i, j)) {
//                     cnt++;
//                 }
//                 else {
//                     cout << -1 << endl;
//                     return 0;
//                 }
//             }
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }