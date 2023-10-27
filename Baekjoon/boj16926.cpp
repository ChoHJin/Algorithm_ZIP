// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int n, m, r;

// void rotate(vector<vector<int>>& matrix, int r) {
//     if(r == 0) return;

//     int d = min(n, m) / 2 + min(n, m) % 2;
    
//     for(int i = 0; i < d; i++) {
//         int a = i, b = i;
//         int tmp = matrix[a][b];

//         while(a < n - 1 - i) {  //좌
//             int nR = matrix[a + 1][b];
//             matrix[a + 1][b] = tmp;
//             tmp = nR;
//             a++;
//         }

//         while(b < m - 1 - i) {  //하
//             int nR = matrix[a][b + 1];
//             matrix[a][b + 1] = tmp;
//             tmp = nR;
//             b++;
//         }

//         while(a >= 1 + i) {     //우
//             int nR = matrix[a - 1][b];
//             matrix[a - 1][b] = tmp;
//             tmp = nR;
//             a--;
//         }

//         while(b >= 1 + i) {     //상
//             int nR = matrix[a][b - 1];
//             matrix[a][b - 1] = tmp;
//             tmp = nR;
//             b--;
//         }
//     }

//     rotate(matrix, r - 1);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m >> r;

//     vector<vector<int>> matrix(n, vector<int>(m));

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cin >> matrix[i][j];
//         }
//     }

//     rotate(matrix, r);

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cout << matrix[i][j] << ' ';
//         }
//         cout << '\n';
//     }

//     return 0;
// }
