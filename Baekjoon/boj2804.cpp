// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string A, B;
//     cin >> A >> B;

//     int crossX = -1, crossY = -1;

//     // A와 B의 교차 지점 찾기
//     for (int i = 0; i < A.length(); i++) {
//         for (int j = 0; j < B.length(); j++) {
//             if (A[i] == B[j]) {
//                 crossX = i;
//                 crossY = j;
//                 break;
//             }
//         }
//         if (crossX != -1) break;
//     }

//     // A 출력
//     for (int i = 0; i < B.length(); i++) {
//         if (i == crossY) {
//             cout << A << endl;
//         } else {
//             for (int j = 0; j < A.length(); j++) {
//                 if (j == crossX) {
//                     cout << B[i];
//                 } else {
//                     cout << ".";
//                 }
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }