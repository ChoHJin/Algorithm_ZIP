// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> arr(n + 1, vector<int>(m + 1, 0));

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             cin >> arr[i][j];
//             arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
//         }
//     }

//     int k;
//     cin >> k;

//     for (int i = 0; i < k; i++) {
//         int y1, x1, y2, x2;
//         cin >> y1 >> x1 >> y2 >> x2;

//         int ans = arr[y2][x2] - arr[y2][x1 - 1] - arr[y1 - 1][x2] + arr[y1 - 1][x1 - 1];
//         cout << ans << '\n';
//     }

//     return 0;
// }