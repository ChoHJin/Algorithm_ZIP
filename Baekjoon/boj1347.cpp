// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int N;
//     cin >> N;

//     string directions;
//     cin >> directions;

//     vector<vector<char>> grid(101, vector<char>(101, '#'));

//     int x = 50;
//     int y = 50;
//     grid[x][y] = '.';

//     int dx[4] = {1, 0, -1, 0};
//     int dy[4] = {0, -1, 0, 1};

//     int dirIndex = 0;

//     for (char direction : directions) {
//         if (direction == 'R') {
//             dirIndex = (dirIndex + 1) % 4;
//         } else if (direction == 'L') {
//             dirIndex = (dirIndex + 3) % 4;
//         } else {
//             x += dx[dirIndex];
//             y += dy[dirIndex];
//             grid[x][y] = '.';
//         }
//     }

//     int minX = 101, minY = 101, maxX = -1, maxY = -1;
//     for (int i = 0; i < 101; i++) {
//         for (int j = 0; j < 101; j++) {
//             if (grid[i][j] == '.') {
//                 minX = min(minX, i);
//                 minY = min(minY, j);
//                 maxX = max(maxX, i);
//                 maxY = max(maxY, j);
//             }
//         }
//     }

//     for (int i = minX; i <= maxX; i++) {
//         for (int j = minY; j <= maxY; j++) {
//             cout << grid[i][j];
//         }
//         cout << '\n';
//     }

//     return 0;
// }
