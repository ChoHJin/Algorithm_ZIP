// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v;
// int n, m;

// void bt(int idx, int cnt) {
//     if(cnt == m) {
//         for(int i = 0; i < m; i++) {
//             cout << v[i] << ' ';
//         }
//         cout << '\n';
//         return;
//     }

//     for(int i = idx; i < n; i++) {
//         v.push_back(i + 1);
//         bt(i, cnt + 1);
//         v.pop_back();
//     }
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     bt(0, 0);

//     return 0;
// }