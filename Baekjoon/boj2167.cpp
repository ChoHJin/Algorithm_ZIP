// #include <iostream>

// using namespace std;

// int arr1[101][101], arr2[101][101];
// int ans[101][101];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m ,k;

//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> arr1[i][j];
//         }
//     }

//     cin >> m >> k;

//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < k; j++) {
//             cin >> arr2[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < k; j++) {
//             for(int l = 0; l < m; l++) {
//                 ans[i][j] += (arr1[i][l] * arr2[l][j]);
//             }
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < k; j++) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }