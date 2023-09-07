// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;

//     while (T--) {
//         vector<int> a(5), b(5);

//         int n;
//         cin >> n;

//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             a[x]++;
//         }

//         cin >> n;

//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             b[x]++;
//         }

//         char result = 'D'; // 무승부

//         for (int i = 4; i >= 1; i--) {
//             if (a[i] > b[i]) {
//                 result = 'A'; // A 승
//                 break;
//             } else if (a[i] < b[i]) {
//                 result = 'B'; // B 승
//                 break;
//             }
//         }

//         cout << result << endl;
//     }

//     return 0;
// }