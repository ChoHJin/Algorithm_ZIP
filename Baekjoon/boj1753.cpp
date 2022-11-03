// #include <iostream>
// #include <vector>
// #include <queue>

// #define INF 1000000

// using namespace std;

// vector<pair<int, int>> graph[300001]; 
// int d[20001];

// void dijkstra(int start) {
//     d[start] = 0;   //시작 노드에서 시작노드로 가는 비용은 0

//     priority_queue<pair<int, int>> pq; //<비용, 도착 노드> 형식의 우선순위 큐

//     pq.push(make_pair(0, start));   //시작노드에서 시작노드로 가는 경로와 비용을 pq에 삽입

//     while(!pq.empty()) {    //pq의 모든 경로를 확인할 때 까지 반복
//         int cost = -pq.top().first; //시작노드에서 현재노드까지의 비용설정, 비용은 음수화되어 있으므로 양수로 바꿔서 사용함
//         int cur = pq.top().second;  //도착노드를 현재 노드로 설정
//         pq.pop();   //현재 경로가 확인되었으므로 우선 순위 큐에서 제거함.

//         for(int i = 0; i < graph[cur].size(); i++) {
//             int next = graph[cur][i].first;     //다음노드 설정, 즉 현재노드와 i번째로 인접한 노드
//             int nextCost = cost + graph[cur][i].second; //시작 노드에서 다음 노드까지의 비용 + 현재 노드에서 i번째로 인접한 노드까지의 비용

//             if(d[next] > nextCost) {    //시작노드에서 다음노드까지의 최소비용보다 새로 계산한 비용이 더 작다면
//                 d[next] = nextCost;     //최소 비용을 업데이트함.
//                 pq.push(make_pair(-nextCost, next));    //갱신한 경로를 최소비용으로 만들기 위해 우선순위큐에 해당 경로 삽입
//             }
//         }
//     }
    
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int v, e, k;
    

//     cin >> v >> e;  //노드의 개수와 간선의 개수 입력
//     cin >> k;       //시작 노드 입력
    
//     //최소 비용 초기화
//     for(int i = 1; i <= v; i++) {
//         d[i] = INF;
//     }

//     for(int i = 0; i < e; i++) {
//         int u, v, w;    //start, end, cost
//         cin >> u >> v >> w;

//         graph[u].push_back(make_pair(v, w));    //시작 노드에 따른 <비용, 도착 노드> 저장
//     }

//     dijkstra(k);

//     for(int i = 1; i <= v; i++) {
//         if(d[i] == INF) {
//             cout << "INF" << "\n";
//         }
//         else {
//             cout << d[i] << "\n";
//         }
//     }


//     return 0;
// }