// #include <iostream>

// using namespace std;

// void drawStar(int n, int row, int col) {
//     int size = n / 3;
    
//     if(n == 1) {
//         cout << '*';
//     } else if((row / size) % 3 == 1 && (col / size) % 3 == 1) {
//         cout << ' '; 
//     } else {
//         drawStar(size, row, col);
//     }   

// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             drawStar(n, i, j);
//         }
//         cout << endl;
//     }

//     return 0;
// }