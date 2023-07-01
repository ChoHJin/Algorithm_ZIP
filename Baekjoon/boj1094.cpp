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

//비트마스킹

// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int x;
//     cin >> x;

//     int cnt = 0;

//     while(x > 0) {
//         if(x & 1) { //x의 가장 오른쪽 비트가 1인 경우
//             cnt++;  
//         }
//         x >>= 1;    //x를 오른쪽으로 한 비트씩 이동
//     }

//     cout << cnt << endl;

//     return 0;
// }