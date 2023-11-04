// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = n - i; j > 0; j--) {
//             cout << ' ';
//         }

//         for(int j = 2 * i - 1; j > 0; j--) {
//             cout << '*';
//         }

//         cout << endl;
//     }

//     for(int i = 1; i < n; i++) {
//         for(int j = 0; j < i; j++) {
//             cout << ' ';
//         }

//         for(int j = 2 * (n - i) - 1; j > 0; j--) {
//             cout << '*';
//         }

//         cout << endl;
//     }

//     return 0;
// }