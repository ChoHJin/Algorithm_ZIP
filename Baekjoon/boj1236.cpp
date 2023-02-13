// #include <iostream>
// #include <algorithm>

// using namespace std;

// char arr[51][51];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     bool flag;

//     cin >> n >> m;

//     int row = n; 
//     int col = m;
//     int rcnt = 0, ccnt = 0;

//     for(int i = 0; i < n; i++) {
//         flag = true;
//         for(int j = 0; j < m; j++) {
//             cin >> arr[i][j];

//             if(arr[i][j] == 'X') {
//                 flag = false;
//             }
//         }
//         if(!flag) row--;
//     }

//     for(int i = 0; i < m; i++) {
//         flag = true;
//         for(int j = 0; j < n; j++) {
//             if(arr[j][i] == 'X') {
//                 flag = false;
//                 break;
//             }
//         }
//         if(!flag) col--;
//     }

//     cout << max(row, col) << endl;

//     return 0;
// }