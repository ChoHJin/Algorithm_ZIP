// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// int dx[] = {0, 0, -1, 1, -1, 1, -1, 1}; //대각선 추가
// int dy[] = {-1, 1, 0, 0, -1, -1, 1, 1}; 

// //vector<vector<int>> map(52, vector<int>(52));
// int map[52][52];
// queue<pair<int, int>> q;

// int w, h;

// void bfs(int x, int y) {
//     map[x][y] = 0;  //방문 표시

//     q.push(pair<int, int>(x, y));   //시작점 push

//     while(!q.empty()) {
//         int cx = q.front().first;
//         int cy = q.front().second;
//         q.pop();

//         for(int i = 0; i < 8; i++) {
//             int nx = cx + dx[i];
//             int ny = cy + dy[i];

//             if(nx >= 0 && ny >= 0 && nx < h && ny < w) {    //지도 범위 내에 있는지 확인
//                 if(map[nx][ny] == 1) {  //해당 좌표가 1(땅)이면
//                     q.push(pair<int, int>(nx, ny)); //해당 좌표를 큐에 넣음
//                     map[nx][ny] = 0;    //0(바다)으로 만듬.
//                 }
//             }
//         }
//     }
// }

// int main() {

//     while(1) {
//         int cnt = 0;
//         cin >> w >> h;

//         // w, h 가 모두 0이면 종료
//         if(w == 0 && h == 0) {
//             break;
//         }
        
//         for(int i = 0; i < h; i++) {    //지도 입력
//             for(int j = 0; j < w; j++) {
//                 cin >> map[i][j];
//             }
//         }

//         for(int i = 0; i < h; i++) {    //지도 탐색 (시작점 부터)
//             for(int j = 0; j < w; j++) {
//                 if(map[i][j] == 1) {    //1(땅)을 발견하면
//                     bfs(i, j);
//                     cnt++;
//                 }
//             }
//         }

//         cout << cnt << endl;
//     }

//     return 0;
// }