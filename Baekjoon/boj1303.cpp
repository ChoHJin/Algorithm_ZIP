// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int n, m;
// vector<string> field;
// vector<vector<bool>> visited;

// int dx[] = {-1, 1, 0, 0};
// int dy[] = {0, 0, -1, 1};

// int dfs(int x, int y, char t) {
//     visited[x][y] = true;
//     int cnt = 1;

//     for(int i = 0; i < 4; i++) {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

//         if(nx >= 0 && nx < n && ny >= 0 && ny < m && field[nx][ny] == t && !visited[nx][ny]) {
//             cnt += dfs(nx, ny, t);
//         }
//     }

//     return cnt;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> m >> n;

//     field.resize(n);
//     visited.resize(n, vector<bool>(m, false));

//     for(int i = 0; i < n; i++) {
//         cin >> field[i];
//     }

//     int white = 0;
//     int black = 0;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             if(!visited[i][j]) {
//                 int p = dfs(i, j, field[i][j]);

//                 if(field[i][j] == 'W') {
//                     white += p * p;
//                 } else {
//                     black += p * p;
//                 }
//             }
//         }
//     }

//     cout << white << " " << black << endl;

//     return 0;
// }