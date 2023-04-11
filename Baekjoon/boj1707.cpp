// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// vector<int> graph[20001];
// int colors[20001]; // 정점의 색을 표시하는 배열 (0: 색칠 안됨, 1: red, 2: blue)

// bool bfs(int start) {
//     queue<int> q;
//     q.push(start);      // 시작 정점을 큐에 넣어준다
//     colors[start] = 1;  // 시작 정점의 색을 red로 초기화

//     while(!q.empty()) {
//         int cur = q.front();
//         q.pop();

//         for(int i = 0; i < graph[cur].size(); i++) {
//             int next = graph[cur][i];

//             if(colors[next] == 0) { // 방문하지 않은 정점일 때
//                 colors[next] = 3 - colors[cur]; // 현재 정점과 다른 색으로 칠한다
//                 q.push(next);       // 다음 정점을 큐에 넣어준다
//             } else if (colors[next] == colors[cur]) {   //만약 현재 정점과 색이 같은 정점이라면
//                 return false;   //이분 그래프가 아님
//             }
//         }
//     }
//     return true;    //모든 정점이 색칠됐으면 이분 그래프
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--) {
//         int v, e;
//         cin >> v >> e;

//         //그래프 초기화
//         for(int i = 1; i <= v; i++) {
//             graph[i].clear();
//             colors[i] = 0;
//         }

//         //그래프 생성
//         for(int i = 0; i < e; i++) {
//             int a, b;
//             cin >> a >> b;

//             graph[a].push_back(b);
//             graph[b].push_back(a);
//         }

//         //BFS
//         bool flag = true;
//         for(int i = 1; i <= v; i++) {   
//             if(colors[i] == 0) {    //아직 방문하지 않은 정점일 때
//                 if(!bfs(i)) {       //이분 그래프가 아니면
//                     flag = false;
//                     break;
//                 }
//             }
//         }

//         if(flag) cout << "YES" << "\n";
//         else cout << "NO" << "\n";
//     }


//     return 0;
// }