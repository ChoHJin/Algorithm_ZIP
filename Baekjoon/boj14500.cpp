// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int dx[] = {-1, 1, 0, 0};
// int dy[] = {0, 0, -1, 1};

// vector<vector<int>> board;
// vector<vector<bool>> visited;

// int N, M, maxSum = 0;

// void dfs(int x, int y, int sum, int depth) {
//     //종료 조건: 테트로미노를 4개 놓았을 때
//     if (depth == 4) {
//         maxSum = max(maxSum, sum);
//         return;
//     }

//     visited[x][y] = true;
//     sum += board[x][y];

//     for(int i = 0; i < 4; i++) {
//         int nx = x + dx[i];
//         int ny = y + dy[i];

//         if(nx >= 0 && nx < N && ny >= 0 && ny < M) {
//             if(!visited[nx][ny]) {
//                 dfs(nx, ny, sum, depth + 1);
//             }
//         }
//     }
//     visited[x][y] = false;
// }

// void tetroShapes(int x, int y) {
//     // ㅗ 모양 처리
//     if(x - 1 >= 0 && y - 1 >= 0 && y + 1 < M) {
//         int sum = board[x][y] + board[x - 1][y] + board[x][y - 1] + board[x][y + 1];
//         maxSum = max(maxSum, sum);
//     }

//     // ㅜ 모양 처리
//     if(x + 1 < N && y - 1 >= 0 && y + 1 < M) {
//         int sum = board[x][y] + board[x + 1][y] + board[x][y - 1] + board[x][y + 1];
//         maxSum = max(maxSum, sum);
//     }

//     // ㅓ 모양 처리
//     if(x - 1 >= 0 && x + 1 < N && y - 1 >= 0) {
//         int sum = board[x][y] + board[x - 1][y] + board[x + 1][y] + board[x][y - 1];
//         maxSum = max(maxSum, sum);
//     }

//     // ㅏ 모양 처리
//     if(x - 1 >= 0 && x + 1 < N && y + 1 < M) {
//         int sum = board[x][y] + board[x - 1][y] + board[x + 1][y] + board[x][y + 1];
//         maxSum = max(maxSum, sum);
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> N >> M;

//     board.resize(N, vector<int>(M));
//     visited.resize(N, vector<bool>(M, false));

//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < M; j++) {
//             cin >> board[i][j];
//         }
//     }

//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < M; j++) {
//             dfs(i, j, 0, 0);
//             tetroShapes(i, j);
//         }
//     }

//     cout << maxSum << endl;

//     return 0;
// }
