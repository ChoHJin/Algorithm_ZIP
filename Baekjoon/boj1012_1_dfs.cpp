// #include <iostream>
// #include <cstring>
// #include <vector>
// #include <queue>

// using namespace std;

// int dx[] = {-1, 0, 1, 0};
// int dy[] = {0, -1, 0, 1};

// vector<vector<int>> map(52, vector<int>(52));
// queue<pair<int, int>> q;

// int m, n, k;    //m : 가로, n : 세로, k : 배추의 수

// void dfs(int y, int x) {
//     map[y][x] = 0;
//     for(int i = 0; i < 4; i++) {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

//         if(map[ny][nx]) {
//             dfs(ny, nx);
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

//             map[y + 1][x + 1] = 1;
//         }

//         for(int i = 1; i <= n; i++) {
//             for(int j = 1; j <= m; j++) {
//                 if(map[i][j]) {
//                     dfs(i,j);
//                     cnt++;
//                 }
//             }
//         }
//         cout << cnt << endl;
//     }

//     return 0;
// }