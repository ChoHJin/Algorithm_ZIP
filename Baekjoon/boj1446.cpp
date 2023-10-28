// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<pair<int, int>> graph[10001];
// vector<int> dist(10001,1e9);

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, d;
//     cin >> n >> d;

//     while(n--) {
//         int start, end, weight;
//         cin >> start >> end >> weight;

//         if(end > d) continue;
//         graph[end].push_back({start, weight});
//     }

//     dist[0] = 0;

//     for(int i = 1; i <= d; i++) {
//         if(graph[i].size() == 0) {
//             dist[i] = dist[i - 1] + 1;
//         } else {
//             for(auto d : graph[i]) {
//                 dist[i] = min(dist[i], min(dist[i - 1] + 1, dist[d.first] + d.second));
//             }
//         }
//     }

//     cout << dist[d] << endl;

//     return 0;
// }