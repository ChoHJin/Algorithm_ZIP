// #include <iostream>

// using namespace std;

// int student[2][6];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         int a, b;
//         cin >> a >> b;

//         student[a][b - 1]++;
//     }

//     int ans = 0;

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 6; j++) {
//             ans += student[i][j] / m;

//             if(student[i][j] % m != 0) {
//                 ans++;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }