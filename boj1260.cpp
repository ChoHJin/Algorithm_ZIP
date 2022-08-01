// // dfs와 bfs는 다뤄본 경험이 거의 없기 때문에 구글링함.
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <queue>

// using namespace std;

// int N, M, V;
// vector<int>list[1001];
// bool visitedD[1001];
// bool visitedB[1001];

// void dfs(int V) {
//     cout << V << " ";
//     visitedD[V] = true;
//     for(int i : list[V]) {
//         if(!visitedD[i]) {
//             dfs(i);
//         }
//     }
// }

// void bfs(int V) {
//     queue<int> q; //큐 생성
//     q.push(V);    //시작노드 큐에 
//     visitedB[V] = true;
//     while(!q.empty()) {
//         int next = q.front();
//         q.pop();
//         cout << next << " ";
        
//         for(int i : list[next]) {
//             if(!visitedB[i]) {
//                 q.push(i);
//                 visitedB[i] = true;
//             }
//         }
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> N >> M >> V;

//     for(int i = 1; i <= M; i++) {
//         int u, v;
//         cin >> u >> v;
//         list[u].push_back(v);
//         list[v].push_back(u);
//     }

//     for(int i = 1; i <= N; i++) {
//         sort(list[i].begin(), list[i].end());
//     }

//     dfs(V);
//     cout << "\n";
//     bfs(V);

    
// }