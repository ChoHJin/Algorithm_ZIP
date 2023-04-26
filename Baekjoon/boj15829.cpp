// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;

// const long long r = 31;
// const long long m = 1234567891;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int L;
//     string str;
//     cin >> L >> str;

//     long long hashVal = 0;
    
//     for(int i = 0; i < L; i++) {
//         long long c = str[i] - 'a' + 1;
//         long long rPow = 1;

//         for(int j = 0; j < i; j++) {
//             rPow = (rPow * r) % m;
//         }
//         hashVal = (hashVal + c * rPow) % m;
//     }

//     cout << hashVal << '\n';

//     return 0;
// }
