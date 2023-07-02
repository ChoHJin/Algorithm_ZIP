// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> maze(n, vector<int>(m));
//     vector<vector<int>> dp(n, vector<int>(m));

//     //미로 입력
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> maze[i][j];
//         }
//     }
    
//     //dp를 사용하여 최대 사탕 개수 계산
//     dp[0][0] = maze[0][0];  //시작 위치의 사탕 개수

//     //첫번째 행 초기화
//     for(int i = 0; i < m; i++) {
//         dp[0][i] = dp[0][i - 1] + maze[0][i];
//     }

//     //첫번째 열 초기화
//     for(int i = 1; i < n; i++) {
//         dp[i][0] = dp[i - 1][0] + maze[i][0];
//     }

//     //나머지 칸 계산
//     for(int i = 1; i < n; i++) {
//         for(int j = 1; j < m; j++) {
//             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + maze[i][j];
//         }
//     }

//     cout << dp[n - 1][m - 1] << endl;   //도착지의 최대 사탕 개수


//     return 0;
// }