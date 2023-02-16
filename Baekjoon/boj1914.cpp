// #include <iostream>
// #include <cmath>
// #include <string>

// using namespace std;

// void hanoi(int n, int a, int b, int tmp) {
//     if(n == 1) {
//         cout << a << " " << b << '\n';
//         return;
//     }
//     else {
//         hanoi(n - 1, a, tmp, b);
//         cout << a << " " << b << '\n';
//         hanoi(n - 1, tmp, b, a);
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     string s = to_string(pow(2, n));
    
//     int idx = s.find('.');
    
//     s = s.substr(0, idx);
//     s[s.length() - 1]--;

//     cout << s << '\n';

//     if(n <= 20) {
//         hanoi(n, 1, 3, 2);
//     }

//     return 0;

//     return 0;
// }