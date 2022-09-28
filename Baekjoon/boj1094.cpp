// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int x;
//     int stick = 64;
//     int tmp = 0, cnt = 0;

//     cin >> x;

//     while(tmp != x) {
//         if(stick + tmp > x) {
//             stick /= 2;
//             continue;
//         }
//         tmp += stick;
//         cnt++;
//         stick /= 2;
//     }

//     cout << cnt << endl;

//     return 0;
// }