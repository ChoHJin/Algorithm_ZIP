// #include <iostream>
// #include <cmath>
// #include <string>
// #include <algorithm>

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

// bool isPalin(string s) {
//     string palin = s;

//     reverse(s.begin(), s.end());

//     if(palin == s) {
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int i = n;
//     while(1) {
//         if(isPrime(i) && isPalin(to_string(i))) {
//             cout << i << endl;
//             break;
//         } else {
//             i++;
//         }
//     }

//     return 0;
// }