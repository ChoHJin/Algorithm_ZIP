// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v;

// void bt(int n, int m, int cnt) {
//     if(cnt == m) {
//         for(int i = 0; i < m; i++) {
//             cout << v[i] << ' ';
//         }
//         cout << '\n';
//         return;
//     }

//     for(int i = 1; i <= n; i++) {
//         v.push_back(i);
//         bt(n, m, cnt + 1);
//         v.pop_back();
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;   
//     cin >> n >> m;

//     bt(n, m, 0);

//     return 0;
// }