// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// int n, m;
// int ans = 0;
// vector<vector<int>> graph(501);
// int visited[501];

// void bfs() {
//     queue<int> q;
//     q.push(1);
//     visited[1] = 1;
//     while (!q.empty()) {
//         int cur = q.front();
//         q.pop();
//         for (auto& next : graph[cur]) {
//             if (visited[next] || visited[cur] >= 3) {
//                 continue;
//             }
            
//             q.push(next);
//             visited[next] = visited[cur] + 1;
//             ans++;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;    

//     for(int i = 0; i < m; i++) {
//         int a, b;
//         cin >> a >> b;

//         graph[a].push_back(b);
//         graph[b].push_back(a);
//     }
//     bfs();

//     cout << ans << endl;

//     return 0;
// }