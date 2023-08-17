// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n;
//     string seats;

//     cin >> n >> seats;

//     int cnt = 1;
//     int tmp = 0;

//     for(int i = 0; i < n; i++) {
//         if(seats[i] == 'S') {
//             cnt++;
//         } else {
//             tmp++;

//             if(tmp == 2) {
//                 tmp = 0;
//                 cnt++;
//             }
//         }
//     }

//     if(cnt > n) cout << n << endl;
//     else cout << cnt << endl;

//     return 0;
// }