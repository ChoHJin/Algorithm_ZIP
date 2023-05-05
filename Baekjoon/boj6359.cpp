// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while(T--) {
//         int n;
//         cin >> n;

//         vector<bool> rooms(n + 1, false);
//         int cnt = 0;

//         for(int i = 1; i <= n; i++) {
//             for(int j = i; j <= n; j += i) {
//                 rooms[j] = !rooms[j]; // i의 배수들의 방문 여부를 반전시킴
//             }
//         }

//         for(int i = 1; i <= n; i++) {
//             cnt += rooms[i];
//         }

//         cout << cnt << '\n';
//     }

//     return 0;
// }
