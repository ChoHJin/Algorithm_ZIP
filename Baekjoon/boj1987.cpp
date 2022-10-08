// #include <iostream>
// #include <algorithm>

// using namespace std;

// int n, m;
// char map[21][21];
// bool visited[26];   //방문한 알파벳 저장
// int dx[] = {-1, 1, 0, 0};
// int dy[] = {0, 0, -1, 1};

// int ans;

// void dfs(int x, int y, int cnt) {
//     ans = max(ans, cnt);    //현재까지 찾은 경로수 보다 큰 경로를 찾으면 ans 갱신

//     for(int i = 0; i < 4; i++) {
//         int nx = dx[i] + x;
//         int ny = dy[i] + y;

//         if(nx >= 0 && ny >= 0 && nx < n && ny < m) {
//             if(!visited[map[nx][ny] - 'A']) {           //이동할 지점이 이전에 방문한 곳(알파벳)인지 확인하고, 방문할 수 있다면
//                 visited[map[nx][ny] - 'A'] = true;      //현재 위치를 방문한 알파벳으로 저장
//                 dfs(nx, ny, cnt + 1);                   //해당 정보를 가지고 dfs 시작   
//                 visited[map[nx][ny] - 'A'] = false;     //dfs가 끝났다면, 인접한 다른경로도 확인해야하므로 
//                                                         //현재 위치를 방문하지 않은 것(알파벳)으로 변경
//             }
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     //맵생성
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> map[i][j];
//         }
//     }

//     //처음 위치 0, 0 은 방문한 겻으로 초기화
//     visited[map[0][0] - 'A'] = true;
//     //0,0부터 dfs 시작 (0, 0 : 좌표, 1 : 카운트)
//     dfs(0, 0, 1);
    
//     cout << ans << endl;

//     return 0;
// }