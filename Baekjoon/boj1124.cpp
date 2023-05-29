// #include <iostream>
// #include <cmath>
// #include <vector>

// using namespace std;

// // bool isPrime(int n) {
// //     if(n < 2) {
// //         return false;
// //     }

// //     for(int i = 2; i <= sqrt(n); i++) {
// //         if(n % i == 0) {
// //             return false;
// //         }
// //     }

// //     return true;
// // }


// vector<int> eratos(int n) {
//     vector<int> isPrime(n + 1, true);
//     isPrime[0] = isPrime[1] = false;

//     for(int i = 2; i * i <= n; i++) {
//         if(isPrime[i]) {
//             for(int j = i * i; j <= n; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }

//     return isPrime;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int a, b;
//     int ans = 0;

//     cin >> a >> b;

//     vector<int> primes = eratos(b);

//     for(int i = a; i <= b; i++) {
//         int n = i;
//         int cnt = 0;       

//         // 기존 풀이
//         // for(int j = 2; j <= sqrt(n); j++) {
//         //     if(n % j == 0 && isPrime(j)) {
//         //         while(n % j == 0) {
//         //             n /= j;
//         //             cnt++;
//         //         }
//         //     }
//         // }

//         // if(n > 1) {
//         //     cnt++;
//         // }

//         // if(isPrime(cnt)) {
//         //     ans++;
//         // }

//         //에라토스테네스의 체를 사용한 풀이
//         for(int j = 2; j <= sqrt(n); j++) {
//             if(n % j == 0 && primes[j]) {
//                 while(n % j == 0) {
//                     n /= j;
//                     cnt++;
//                 }
//             }
//         }

//         if(n > 1) {
//             cnt++;
//         }

//         if(primes[cnt]) {
//             ans++;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }