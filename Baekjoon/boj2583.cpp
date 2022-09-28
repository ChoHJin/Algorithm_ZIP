// #include <iostream>
// #include <queue>
// #include <algorithm>
// #include <vector>

// using namespace std;

// queue<pair<int, int>> q;
// vector<int> v;  //bfs를 실행할 때마다 나오는 면적 저장
// int map[101][101];
// bool visited[101][101];

// int dx[] = {0, 0, -1, 1};
// int dy[] = {-1, 1, 0, 0};
// int n, m, k, ans;

// void bfs(int x, int y) {
//     q.push(make_pair(x, y));
//     visited[x][y] = true;
//     int cnt = 1;

//     while(!q.empty()) {
//         x = q.front().first;
//         y = q.front().second;
//         q.pop();

//         for(int i = 0; i < 4; i++) {
//             int nx = x + dx[i];
//             int ny = y + dy[i];
//             if(nx < m && nx >= 0 && ny < n && ny >= 0) {
//                 if(map[nx][ny] == 0 && visited[nx][ny] == 0) {
//                     visited[nx][ny] = true;
//                     q.push(make_pair(nx, ny));
//                     cnt++;
//                 }
//             }
//         }
//     }

//     v.push_back(cnt);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int x1, x2, y1, y2;

//     cin >> m >> n >> k;

//     for(int i = 0; i < k; i++) {
//         cin >> x1 >> y1 >> x2 >> y2;

//         for(int j = x1; j < x2; j++) {
//             for(int t = y1; t < y2; t++) {
//                 map[t][j] = true;
//             }
//         }
//     }

//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             if(map[i][j] == 0 && visited[i][j] == 0) {
//                 bfs(i, j);
//             }
//         }
//     }

//     sort(v.begin(), v.end());

//     cout << v.size() << endl;
    
//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }

//     return 0;
// }