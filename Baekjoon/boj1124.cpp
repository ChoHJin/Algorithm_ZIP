// #include <iostream>
// #include <cmath>

// using namespace std;

// bool isPrime(int n) {
//     if(n < 2) {
//         return false;
//     }

//     for(int i = 2; i <= sqrt(n); i++) {
//         if(n % i == 0) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int a, b;
//     int ans = 0;

//     cin >> a >> b;

//     for(int i = a; i <= b; i++) {
//         int n = i;
//         int cnt = 0;

//         for(int j = 2; j <= sqrt(n); j++) {
//             if(n % j == 0 && isPrime(j)) {
//                 while(n % j == 0) {
//                     n /= j;
//                     cnt++;
//                 }
//             }
//         }

//         if(n > 1) {
//             cnt++;
//         }

//         if(isPrime(cnt)) {
//             ans++;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }