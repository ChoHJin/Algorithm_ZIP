// #include <iostream>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int students[n][5];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 5; j++) {
//             cin >> students[i][j];
//         }
//     }

//     int maxCount = -1;
//     int ans = -1;

//     for (int i = 0; i < n; i++) {
//         int count = 0;
//         for (int j = 0; j < n; j++) {
//             if (i != j) {
//                 for (int k = 0; k < 5; k++) {
//                     if (students[i][k] == students[j][k]) {
//                         count++;
//                         break;
//                     }
//                 }
//             }
//         }

//         if (count > maxCount) {
//             maxCount = count;
//             ans = i + 1;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }