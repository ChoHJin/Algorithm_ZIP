// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
//     cin >> n >> k;

//     if(k >= n) {
//         cout << 0 << endl;

//         return 0;
//     }

//     int ans = 0;        

//     while(1) {
//         int cnt = 0;
//         int tmp = n;

//         while(tmp > 0) {
//             if(tmp % 2 == 0) {
//                 tmp /= 2;
//             } else {
//                 tmp /= 2;
//                 cnt++;
//             }
//         }

//         if(k >= cnt) {
//             break;
//         }
//         n++;
//         ans++;
//     }

//     cout << ans << endl;


//     return 0;
// }