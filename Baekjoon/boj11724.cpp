// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int>list[1001];
// bool visited[1001];

// void dfs(int v) {
//     visited[v] = true;

//     for (int i : list[v]) {
//         int next = list[v][i];
//         if(!visited[i]) {
//             dfs(i);
//         }
//     }
// }

// int main() {
//     int n, m;   //정점, 간선
//     int cnt = 0;

//     cin >> n >> m;

//     for(int i = 0; i < m; i++) {    //간선 연결
//         int u, v;
//         cin >> u >> v;
//         list[u].push_back(v);
//         list[v].push_back(u);
//     }

//     for(int i = 1; i <= n; i++) {
//         if(!visited[i]) {
//             cnt++;
//             dfs(i);
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }