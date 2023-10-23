// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// int board[1001][1001];
// bool visited[1001][1001];
// int dist[1001][1001];

// int n, m;
// int dx[] = {0, 0, -1, 1};
// int dy[] = {-1, 1, 0, 0};

// void bfs(int startX, int startY) {
//     queue<pair<int, int>> q;
//     q.push({startX, startY});
//     visited[startX][startY] = true;

//     while (!q.empty()) {
//         int x = q.front().first;
//         int y = q.front().second;
//         q.pop();

//         for (int i = 0; i < 4; ++i) {
//             int nx = x + dx[i];
//             int ny = y + dy[i];

//             if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[nx][ny] == 1 && !visited[nx][ny]) {
//                 q.push({nx, ny});
//                 visited[nx][ny] = true;
//                 dist[nx][ny] = dist[x][y] + 1;
//             }
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> m;
//     int x = 0;
//     int y = 0;


//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cin >> board[i][j];

//             if (board[i][j] == 2) {
//                 x = i;
//                 y = j;
//             }
//         }
//     }

//     bfs(x, y);

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if(dist[i][j] == 0 && board[i][j] == 1) {
//                 cout << -1 << ' ';
//             } else {
//                 cout << dist[i][j] << ' ';
//             }
//         }
//         cout << '\n';
//     }

//     return 0;
// }
