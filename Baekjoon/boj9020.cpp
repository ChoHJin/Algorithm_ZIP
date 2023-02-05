// #include <iostream>
// #include <cmath>

// using namespace std;

// bool isPrime(int n) {
//     if(n < 2) return false;

//     for(int i = 2; i <= sqrt(n); i++) {
//         if(n % i == 0) return false;
//     }

//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;

//     cin >> t;

//     while(t--) {
//         int n;

//         cin >> n;

//         if(n % 2 == 0) {
//             for(int i = n / 2; i >= 2; i--) {
//                 if(isPrime(i) && isPrime(n - i)) {
//                     cout << i << " " << n - i << endl;
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }