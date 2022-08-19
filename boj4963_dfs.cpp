// #include <iostream>
// #include <vector>

// using namespace std;

// int dx[] = {0, 0, -1, 1, -1, 1, -1, 1}; //대각선 추가
// int dy[] = {-1, 1, 0, 0, -1, -1, 1, 1}; 

// //vector<vector<int>> map(52, vector<int>(52));
// int map[52][52];

// int w, h;

// void dfs(int y, int x) {
//     map[y][x] = 0;

//     for(int i = 0; i < 8; i++) {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

//         if(map[ny][nx] == 1) {
//             dfs(ny, nx);
//         }
//     }
// }

// int main() {

//     while(1) {
//         int cnt = 0;
//         cin >> w >> h;

//         if(w == 0 && h == 0) {
//             break;
//         }
        
//         for(int i = 1; i <= h; i++) {
//             for(int j = 1; j <= w; j++) {
//                 cin >> map[i][j];
//             }
//         }

//         for(int i = 1; i <= h; i++) {
//             for(int j = 1; j <= w; j++) {
//                 if(map[i][j] == 1) {
//                     dfs(i, j);
//                     cnt++;
//                 }
//             }
//         }

//         cout << cnt << endl;
//     }

//     return 0;
// }