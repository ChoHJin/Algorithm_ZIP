// #include <iostream>
// #include <vector>

// using namespace std;

// // 최대공약수 함수 (유클리드 호제법 사용)
// int gcd(int a, int b) {
//     if (b == 0) return a;
//     else return gcd(b, a % b);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;

//     while (T--) {
//         int n;
//         cin >> n;

//         vector<int> arr(n);

//         // n개의 정수 입력 받기
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         long long sum = 0; // 최대공약수의 합을 저장할 변수

//         // 두 수씩 짝지어 최대공약수 구하기
//         for (int i = 0; i < n - 1; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 sum += gcd(arr[i], arr[j]); // 구한 최대공약수를 sum에 더해준다.
//             }
//         }

//         cout << sum << "\n"; // 최대공약수의 합 출력
//     }

//     return 0;
// }
