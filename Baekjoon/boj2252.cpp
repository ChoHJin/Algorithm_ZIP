// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// vector<int> topologicalSort(int n, vector<vector<int>>& adj, vector<int>& inDegree) {
//     vector<int> order;  //위상 정렬 결과를 저장할 벡터
//     queue<int> q;   //진입 차수가 0인 정점을 저장할 큐

//     //초기 진입 차수가 0인 정점을 큐에 삽입
//     for(int i = 1; i <= n; i++) {   
//         if(inDegree[i] == 0) {
//             q.push(i);
//         }
//     }

//     //위상 정렬 알고리즘
//     while(!q.empty()) {
//         int node = q.front();
//         q.pop();
//         order.push_back(node);  //정점을 결과에 추가

//         //현재 정점과 연결된 정점들의 진입 차수를 1 감소시킴
//         for(int next : adj[node]) {
//             inDegree[next]--;
//             //진입 차수가 0이 되면 큐에 삽입
//             if(inDegree[next] == 0) {
//                 q.push(next);
//             }
//         }
//     }

//     return order;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;

//     cin >> n >> m;

//     vector<vector<int>> adj(n + 1); //인접 리스트
//     vector<int> inDegree(n + 1, 0); //진입 차수 배열

//     //입력 받은 그래프 정보를 인접 리스트와 진입 차수 배열에 저장
//     for(int i = 0; i < m; i++) {
//         int a, b;
//         cin >> a >> b;

//         adj[a].push_back(b);    //방향 그래프이므로 a에서 b로 연결되어 있음을 의미
//         inDegree[b]++;
//     }

//     //위상 정렬
//     vector<int> ans = topologicalSort(n, adj, inDegree);

//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << ' ';
//     }
//     cout << endl;

//     return 0;
// }