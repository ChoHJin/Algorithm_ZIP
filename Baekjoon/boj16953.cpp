// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int a, b, cnt = 0;

//     cin >> a >> b;

//     while(1) {
//         if(a == b) {
//             cout << cnt + 1 << endl;
//             break;
//         }
//         else if(a > b) {
//             cout << -1 << endl;
//             return 0;
//         }

//         if(b % 10 == 1) {
//             b /= 10;
//         }
//         else if(b % 2 == 0) {
//             b /= 2;
//         }
//         else {
//             cout << -1 << endl;
//             break;
//         }
//         cnt++;        
//     }

//     return 0;
// }