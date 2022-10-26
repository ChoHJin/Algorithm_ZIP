// #include <iostream>

// using namespace std;

// int arr[30][30];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
    
//     cin >> n >> k;

//     for(int i = 0; i < 30; i++) {
//         for(int j = 0; j <= i; j++) {
//             if(i == 0 || j == 0) {
//                 arr[i][j] = 1;
//             }
//             else {
//                 arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//             }
//         }
//     }

//     cout << arr[n - 1][k - 1] << endl;

//     return 0;
// }