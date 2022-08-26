// #include <iostream>
// #include <vector>
// #include <cstring>
// #include <algorithm>

// using namespace std;

// int map[101][101];
// bool visited[101][101];

// int dx[4] = {0, 0, -1, 1};
// int dy[4] = {-1, 1, 0, 0};

// int n, m, h, cnt, ans;

// void dfs(int x, int y) {
//     visited[y][x] = true;

//     for(int i = 0; i < 4; i++) {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

//         if(nx > n || ny > n || nx < 1 || ny < 1) 
//             continue;
//         if(map[ny][nx] <= h || visited[ny][nx]) 
//             continue;
        
//         dfs(nx, ny);
        
//     }
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cin >> map[i][j];
//             m = max(m, map[i][j]);
//         }
//     }

//     for(h = 0; h <= m; h++) {
//         memset(visited, 0, sizeof(visited));
//         cnt = 0;

//         for(int i = 1; i <= n; i++) {
//             for(int j = 1; j <= n; j++) {
//                 if(map[i][j] > h && !visited[i][j]) {
//                     dfs(j, i);
//                     cnt++;
//                 }
//             }
//         }
//         ans = max(ans, cnt);
//     }

//     cout << ans << endl;

//     return 0;
// }