// #include <iostream>
// #include <cstring>

// using namespace std;

// int dx[] = {0, 0, -1, 1};
// int dy[] = {-1, 1, 0, 0};
// char rgb[101][101];
// bool visited[101][101];

// int n, nCnt, abCnt;

// void dfs(int x, int y) {
//     visited[x][y] = true;

//     for(int i = 0; i < 4; i++) {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

//         if(nx < 0 || ny < 0 || nx >= n || ny >= n || visited[nx][ny] || rgb[nx][ny] != rgb[x][y]) continue;
//         dfs(nx, ny);
        
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> rgb[i][j];
//         }
//     }

//     //정상인 카운트, 색깔별로 구역을 카운트
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(!visited[i][j]) {
//                 dfs(i, j);
//                 nCnt++;
//             }
//         }
//     }

//     memset(visited, false, sizeof(visited));

//     //적록색약
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(rgb[i][j] == 'R') {  //색깔이 R이면 
//                 rgb[i][j] = 'G';   //G로 바꿔줌
//             }
//         }
//     }
//     //적록색약 카운트
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(!visited[i][j]) {
//                 dfs(i, j);
//                 abCnt++;    
//             }
//         }
//     }

//     cout << nCnt << " " << abCnt << endl;

//     return 0;
// }