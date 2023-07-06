// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long x, y;
//     cin >> x >> y;

//     long long z = (100 * y) / x;    //초기 승률 계산
//     long long low = 0, high = 1000000000;   //이분 탐색 범위 설정
//     long long ans = -1; //게임 횟수의 최솟값 초기화

//     //이분 탐색으로 게임 횟수의 최솟값 구하기
//     while(low <= high) {
//         long long mid = (low + high) / 2;   //중간 값 계산
//         long long newZ = ((100 * (y + mid)) / (x + mid));   //새로운 승률 계산

//         if(newZ > z) {
//             ans = mid;  //게임 횟수 갱신
//             high = mid - 1; //더 작은 게임 횟수로 이분 탐색
//         } else {
//             low = mid + 1;  //더 큰 게임 횟수로 이분 탐색
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }