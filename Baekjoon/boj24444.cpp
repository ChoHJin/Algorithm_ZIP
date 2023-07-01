// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>

// using namespace std;

// vector<int> graph[100001];  //그래프를 인접 리스트로 표현하기 위한 벡터
// bool visited[100001];   //정점 방문 여부 저장하는 배열
// int ans[100001];    //방문 순서 저장하는 배열
// int n, m, r, cnt;   // n : 정점의 수, m : 간선의 수, r : 시작 정점, cnt : 방문순서를 세는 변수

// void bfs(int x) {
//     queue<int> q;
//     q.push(x);  //큐에 노드를 넣음
//     visited[x] = true;  //처음 방문한 곳 표시
//     cnt++;  
//     ans[x] = cnt;   //시작 정점의 방문 순서를 저장

//     while (!q.empty()) {
//         int u = q.front();  //큐의 맨 앞에 있는 정점을 꺼냄
//         q.pop();
        
//         for (int v : graph[u]) {    //정점 u의 인접 정점들을 순회
//             if (!visited[v]) {  //방문하지 않은 정점이면
//                 cnt++;
//                 ans[v] = cnt;   //정점 v의 방문 순서를 저장
//                 q.push(v);  //정점 v를 큐에 넣음
//                 visited[v] = true;  //정점 v가 방문했다고 체크함
//             }
//         }
//     }
    
//     for (int i = 1; i <= n; i++) {
//         cout << ans[i] << '\n';
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m >> r;
    
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
        
//         graph[u].push_back(v);  //양방향 간선 추가
//         graph[v].push_back(u);
//     }
    
//     for(int i = 0; i <= n; i++) {
//         sort(graph[i].begin(), graph[i].end()); //인접 정점을 오름차순으로 정렬
//     }

//     bfs(r); //시작 정점에서 bfs 실행
    
//     return 0;
// }
