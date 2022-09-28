// #include <iostream>
// #include <math.h>

// using namespace std;

// bool isPrime(int n);

// int main() {
//     int n;
//     int s[1000];
//     int cnt = 0;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cin >> s[i];

//         if(isPrime(s[i]) == true) 
//             cnt++;
//     }

//     cout << cnt << endl;
// }

// bool isPrime(int n) {
//     if(n < 2) {
//         return false;
//     }

//     for(int i = 2; i <= sqrt(n); i++) {
//             if((n % i) == 0) return false;
//         }
    
//     return true;
// }