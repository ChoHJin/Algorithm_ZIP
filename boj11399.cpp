// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n;
//     int p[1001];
//     int time = 0, result = 0;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> p[i];
//     }
//     // 최솟값을 구하기 위해 정렬 후
//     sort(p, p+n);

//     for(int i = 0; i < n; i++) {
//         time += p[i];   //시간에 최솟값 부터 넣어서 더한 값을
//         result += time; //결과값에 넣어서 더해줌 ((p1) + (p1+p2) + (p1+p2+p3) + (p1+p2+..+pn))
//     }
//     cout << result;

// }