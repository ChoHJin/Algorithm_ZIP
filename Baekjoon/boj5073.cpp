// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     while(1) {
//         int a, b, c;
//         cin >> a >> b >> c;

//         // 세 변의 길이가 모두 0인 경우 종료
//         if (a == 0 && b == 0 && c == 0) {
//             break;
//         }
        
//         // 세 변의 길이를 정렬
//         int sides[3] = {a, b, c};

//         sort(sides, sides + 3);

//         // 가장 긴 변이 다른 두 변의 합보다 작다면 삼각형을 만들 수 없음
//         if (sides[2] >= sides[0] + sides[1]) {
//             cout << "Invalid" << endl;
//         } else if (a == b && b == c) {
//             cout << "Equilateral" << endl;
//         } else if (a == b || b == c || a == c) {
//             cout << "Isosceles" << endl;
//         } else {
//             cout << "Scalene" << endl;
//         }
//     }

//     return 0;
// }