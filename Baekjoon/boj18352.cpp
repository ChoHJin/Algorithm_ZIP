// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>

// using namespace std;

// vector<int> graph[300001];
// vector<int> dist(300001, -1);   //각 도시의 최단 거리를 저장하는 벡터

// void bfs(int start, int k) {
//     queue<int> q;
//     q.push(start);
//     dist[start] = 0;

//     while(!q.empty()) {
//         int cur = q.front();
//         q.pop();

//         for(int next : graph[cur]) {
//             if(dist[next] == -1) {
//                 dist[next] = dist[cur] + 1;
//                 q.push(next);
//             }
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m, k, x;
//     cin >> n >> m >> k >> x;

//     for(int i = 0; i < m; i++) {
//         int a, b;
//         cin >> a >> b;

//         graph[a].push_back(b);
//     }

//     bfs(x, k);

//     vector<int> ans;

//     for(int i = 1; i <= n; i++) {
//         if(dist[i] == k) {
//             ans.push_back(i);
//         }
//     }

//     if(ans.empty()) {
//         //최단거리가 k인 도시가 없으면 -1 출력
//         cout << -1 << '\n';
//     } else {
//         //오름차순으로 정렬하여 출력
//         sort(ans.begin(), ans.end());

//         for(int city : ans) {
//             cout << city << '\n';
//         }
//     }

//     return 0;
// }