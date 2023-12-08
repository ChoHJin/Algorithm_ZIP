// #include <iostream>
// #include <algorithm>

// using namespace std;

// vector<string> stars;

// void drawStar(int n, int row, int col) {
//     if (n == 3) {
//         stars[row][col] = '*';
//         stars[row + 1][col - 1] = '*';
//         stars[row + 1][col + 1] = '*';
//         stars[row + 2][col - 2] = '*';
//         stars[row + 2][col - 1] = '*';
//         stars[row + 2][col] = '*';
//         stars[row + 2][col + 1] = '*';
//         stars[row + 2][col + 2] = '*';
//         return;
//     }

//     int size = n / 2;
    
//     drawStar(size, row, col);
//     drawStar(size, row + size, col - size);
//     drawStar(size, row + size, col + size);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     stars.resize(n, string(2 * n - 1, ' '));

//     drawStar(n, 0, n - 1);

//     for (int i = 0; i < n; ++i) {
//         cout << stars[i] << endl;
//     }

//     return 0;
// }