// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<int> v(n + 1, 0);

//     for(int i = 0; i < m; i++) {
//         int from, to, cnt;
//         cin >> from >> to >> cnt;

//         for(int j = from; j <= to; j++) {
//             v[j] = cnt;
//         }
//     }

//     for(int i = 1; i <= n; i++) {
//         cout << v[i] << ' ';
//     }

//     return 0;
// }