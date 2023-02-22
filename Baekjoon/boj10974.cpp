// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v;
// bool visited[9];
// int idx, n;

// void dfs(int idx) {
//     if(idx == n) {
//         for(int i = 0; i < n; i++) {
//             cout << v[i] << ' ';
//         }
//         cout << '\n';
//         return;
//     }

//     for(int i = 1; i <= n; i++) {
//         if(!visited[i]) {
//             visited[i] = true;
//             v[idx] = i;
//             dfs(idx + 1);
//             visited[i] = false;
//         };
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;
//     v.resize(n);

//     dfs(0);

//     return 0;
// }