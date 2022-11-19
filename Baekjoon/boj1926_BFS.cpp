// #include <iostream>
// #include <queue>
// #include <algorithm>

// using namespace std;

// int map[501][501];
// bool visited[501][501];
// queue<pair<int,int>> q;

// //상 하 좌 우
// int dx[] = {-1, 1, 0, 0};
// int dy[] = {0, 0, -1, 1};
// int n, m, cnt, area, maxArea;

// void bfs(int y, int x) {
//     q.push(make_pair(y, x));
//     visited[y][x] = true;

//     while(!q.empty()) {
//         x = q.front().second;
//         y = q.front().first;
//         q.pop();

//         for(int i = 0; i < 4; i++) {
//             int nx = x + dx[i];
//             int ny = y + dy[i];

//             if(nx >= 0 && ny >= 0 && nx < m && ny < n) {
//                 if(map[ny][nx] == 1 && !visited[ny][nx]) {
//                     visited[ny][nx] = true;
//                     q.push(make_pair(ny, nx));
//                     area++;
//                 }
//             }
//         }
//     }


// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> map[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             if(map[i][j] == 1 && !visited[i][j]) {
//                 cnt++;
//                 area = 1;
//                 bfs(i, j);
//                 maxArea = max(maxArea, area);
//             }
//         }
//     }

//     cout << cnt << endl;
//     cout << maxArea << endl;


//     return 0;
// }