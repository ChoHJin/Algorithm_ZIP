// #include <iostream>

// using namespace std;

// bool isPrime(long long n) {
//     if(n <= 1) {
//         return false;
//     }

//     if(n == 2 || n == 3) {
//         return true;
//     }

//     if(n % 2 == 0 || n % 3 == 0) {
//         return false;
//     }

//     for(long long i = 5; i * i <= n; i++) {
//         if(n % i == 0 || n % (i + 2) == 0) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long n, m;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> m;

//         while(!isPrime(m)) {
//             m++;
//         }
//         cout << m << endl;
//     }

//     return 0;
// }