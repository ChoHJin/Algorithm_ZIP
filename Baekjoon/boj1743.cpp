// #include <iostream>
// #include <algorithm>

// using namespace std;

// int n, m, k;
// int map[101][101];
// bool visited[101][101];
// int dx[] = {0, 0, -1, 1};
// int dy[] = {-1, 1, 0, 0};
// int cnt, ans;

// void dfs(int x, int y) {
//     visited[x][y] = true;
//     cnt++;

//     for(int i = 0; i < 4; i++) {
//         int nx = dx[i] + x;
//         int ny = dy[i] + y;

//         if(nx < 1 || nx > n || ny < 1 || ny > m) {
//             continue;
//         }

//         if(!visited[nx][ny] && map[nx][ny] == 1) {
//             dfs(nx, ny);
//         }
//     }
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m >> k;

//     for(int i = 0; i < k; i++) {
//         int r, c;

//         cin >> r >> c;

//         map[r][c] = 1;
//     }

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= m; j++) {
//             if(map[i][j] == 1 && !visited[i][j]) {
//                 cnt = 0;
//                 dfs(i, j);
//                 ans = max(ans, cnt);
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }