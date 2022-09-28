// #include <iostream>
// #include <vector>
// #include <queue>
// #include <stdio.h>
// #include <utility>

// using namespace std;

// int n, m;
// int direct[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};  //좌표 : 위 아래 왼쪽 오른쪽
// vector<int> maze[101];
// vector<int> dist[101];

// void bfs() {
//     queue<pair<int, int>> q;    //pair : 두 객체를 하나의 객체로 취급할 수 있게 묶어주는 클래스
//     dist[0][0] = 1;
//     q.push(make_pair(0, 0));    //make_pair(a,b) : a와b가 들어간 pair를 만들어줌, pair.first : x축, second : y축

//     while(!q.empty()) {
//         pair<int, int> now = q.front();    //q.first : q의 첫번째 인자를 반환함
//         q.pop();
        
//         for(int i = 0; i < 4; i++) {
//             pair<int, int> next = make_pair( 
//                 now.first + direct[i][0],
//                 now.second + direct[i][1]
//             );

//             if (next.first >= 0 && next.first <= m - 1 && next.second >= 0 && next.second <= n - 1 && maze[next.second][next.first] == 1 && dist[next.second][next.first] == -1) {
//                 q.push(next);
//                 dist[next.second][next.first] = dist[now.second][now.first] + 1;
//             }
//         }
//     }
// }

// int main() {
//     cin >> n >> m;
    
//     for(int i = 0; i < n; i++) {
//         for(int j= 0; j < m; j++) {
//             int num;
//             //cin >> num;
//             scanf("%1d", &num);
//             maze[i].push_back(num);
//             dist[i].push_back(-1);
//         }
//     }
//     bfs();

//     cout << dist[n - 1][m - 1] << endl;

//     return 0;
// }