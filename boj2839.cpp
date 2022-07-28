// #include <iostream>

// using namespace std;

// // int main() {
// //     int n;

// //     int cnt = 0;

// //     cin >> n;

// //     while(1) {
// //         // 먼저 5로 나눠 나머지가 0이면 몫을 더함.(최대한 5키로 짜리 위주로 챙김)
// //         if (n % 5 == 0) {
// //             cnt += n / 5;
// //             cout << cnt;
// //             break;
// //         }
// //         // 위의 조건문이 충족하지 않을 시, 3키로를 빼고 다시 검사함.
// //         n -= 3;
// //         cnt++;
// //         // 딱 맞게 다 챙겼으면 개수 출력
// //         if(n == 0) {
// //             cout << cnt;
// //             break;
// //         }
// //         //정확하게 n키로를 만들지 못하면 -1 출력
// //         else if (n < 0) {
// //             cout << -1;
// //             break;
// //         }
// //     }
// //     return 0;
// // }


// // dp 학습용 (블로그 풀이 참조함)

// int min(int a, int b) { 
//     return a < b ? a : b;
// }

// int memo[5001]; // 메모이제이션

// int main() {
//     int n;
//     cin >> n;

//     //3kg와 5kg을 만드는 최소 봉지수는 1개
//     memo[3] = memo[5] = 1;
    
//     //3kg 과 5kg 다음 수인 6kg부터 순회함
//     for(int i = 6; i <= n; i++) {
//         if (memo[i - 3]) {
//             memo[i] = memo[i - 3] + 1;
//         }

//         //이미 dp[i-3]에 값이 존재할때 dp[i]가 업데이트 됐었을 수 있다.
// 		//만약 dp[i]에 값이 없다면 dp[i] = dp[i-5] +1 로 업데이트
//         if (memo[i - 5]) {
//             memo[i] = memo[i] ? min(memo[i], memo[i - 5] + 1) : memo[i - 5] + 1;
//         }
//     }
//     cout << (memo[n] == 0 ? -1 : memo[n]) << endl;

// }
