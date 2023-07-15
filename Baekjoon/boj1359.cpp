// #include <iostream>

// using namespace std;

// long long Combination(int a, int b) {
//     int n = a;
//     int r = b;
//     long long nn = 1;
//     long long rr = 1;

//     while(r > 0) {
//         nn *= n--;
//         rr *= r--;
//     }
//     return nn / rr;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n, m, k;
//     cin >> n >> m >> k;

//     long long num1 = 0;
//     long long num2 = Combination(n, m);

//     for(int i = k; i <= m; i++) {
//         if(n - m < m - i) 
//             continue;

//         num1 += Combination(m, i) * Combination(n - m, m - i);
//     }

//     cout.precision(16);
//     cout << static_cast<double>(num1) / num2 << '\n';

//     return 0;
// }
