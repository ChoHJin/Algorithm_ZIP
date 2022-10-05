// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int taro = 1000;
//     int ans = 0;
//     int cnt = 0;
//     cin >> n;

//     ans = taro - n;

//     while(ans != 0) {
//         if(ans >= 500) {
//             ans -= 500;
//             cnt++;
//         }
//         else if(ans >= 100) {
//             ans -= 100;
//             cnt++;
//         }
//         else if(ans >= 50) {
//             ans -= 50;
//             cnt++;
//         }
//         else if(ans >= 10) {
//             ans -= 10;
//             cnt++;
//         }
//         else if(ans >= 5) {
//             ans -= 5;
//             cnt++;
//         }
//         else {
//             ans -= 1;
//             cnt++;
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }