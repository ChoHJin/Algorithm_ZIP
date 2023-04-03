// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int E, S, M;
//     cin >> E >> S >> M;

//     int e = 1, s = 1, m = 1; // 현재 지구, 태양, 달의 연도
//     int year = 1;

//     while (true) {
//         if (e == E && s == S && m == M) {
//             cout << year << endl;
//             break;
//         }

//         // 1년이 지남에 따라 지구, 태양, 달의 연도를 1씩 증가
//         e++; s++; m++; year++;

//         // 연도는 1에서 15까지 순환한다.
//         if (e == 16) e = 1;
//         if (s == 29) s = 1;
//         if (m == 20) m = 1;
//     }

//     return 0;
// }