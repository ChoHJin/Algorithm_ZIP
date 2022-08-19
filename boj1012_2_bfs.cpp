// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <queue>

// using namespace std;

// int dx[] = {-1, 0, 1, 0};
// int dy[] = {0, -1, 0, 1};

// vector<vector<int>> map(52, vector<int>(52));
// queue<pair<int, int>> q;

// int m, n, k;    //m : 가로, n : 세로, k : 배추의 수

// void bfs(int x, int y) {
//     map[x][y] = 0;

//     q.push(pair<int, int>(x, y));

//     while(!q.empty()) {
//         int cx = q.front().first;
//         int cy = q.front().second;
//         q.pop();

//         for(int i = 0; i < 4; i++) {
//             int nx = cx + dx[i];
//             int ny = cy + dy[i];
//             if(nx >= 0 && ny >= 0 && nx < n && ny < m) {
//                 if(map[nx][ny] == 1) {
//                     map[nx][ny] = 0;
//                     q.push(pair<int, int>(nx, ny));
//                 }
//             }
//         }
//     }
// }



// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;

//     cin >> t;

//     while(t--) {
//         int cnt = 0;
        
//         cin >> m >> n >> k;
        
//         for(int i = 0; i < k; i++) {
//             int x, y;

//             cin >> x >> y;
//             map[y][x] = 1;
//         }

//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < m; j++) {
//                 if(map[i][j] == 1) {
//                     //dfs(i,j);
//                     bfs(i, j);
//                     cnt++;
//                 }
//             }
//         }

//         cout << cnt << endl;
//     }

//     return 0;
// }