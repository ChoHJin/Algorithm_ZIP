// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int n, m;
// int arr[9];
// bool visited[9];

// void dfs(int num, int idx) {
//     if(idx == m) {
//         for(int i = 0; i < m; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << "\n";
//         return;
//     }

//     for(int i = num; i <= n; i++) {
//         if(!visited[i]) {
//             visited[i] = true;
//             arr[idx] = i;
//             dfs(i + 1, idx + 1);
//             visited[i] = false;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     dfs(1, 0);

//     return 0;
// }