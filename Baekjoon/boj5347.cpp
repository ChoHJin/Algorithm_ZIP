// #include <iostream>

// using namespace std;

// long long gcd(long long a, long long b) {
//     long long c;

//     while(b != 0) {
//         c = a % b;
//         a = b;
//         b = c;
//     }

//     return a;
// }

// void LCM(long long a, long long b) {
//     long long lcm = a * b / gcd(a, b);

//     cout << lcm << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;

//     while(t--) {
//         long long a, b;
//         cin >> a >> b;

//         LCM(a, b);
//     }

//     return 0;
// }