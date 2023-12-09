// #include <iostream>

// using namespace std;

// char arr[401][401];

// void drawStar(int n, int col, int row) {
//     if(n == 1) {
//         arr[col][row] = '*';
//         return;
//     } else {
//         int size = 4 * n - 3;

//         for(int j = row; j < row + size; j++) {
//             arr[col][j] = '*';
//             arr[col + size - 1][j] = '*';
//         }

//         for(int i = col; i < col + size; i++) {
//             arr[i][row] = '*';
//             arr[i][row + size - 1] = '*';
//         }

//         drawStar(n - 1, col + 2, row + 2);
//     }
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for(int i = 0; i < 4 * n - 3; i++) {
//         for(int j = 0; j < 4 * n - 3; j++) {
//             arr[i][j] = ' ';
//         }
//     }

//     drawStar(n, 0, 0);

//     for(int i = 0; i < 4 * n - 3; i++) {
//         for(int j = 0; j < 4 * n - 3; j++) {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }