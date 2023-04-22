// #include <iostream>
// #include <stack>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, b;
//     cin >> n >> b;

//     stack<char> s;
//     while (n > 0) {
//         int r = n % b;
//         if (r < 10) {
//             s.push(r + '0');
//         } else {
//             s.push(r - 10 + 'A');
//         }
//         n /= b;
//     }

//     while (!s.empty()) {
//         cout << s.top();
//         s.pop();
//     }
//     cout << '\n';

//     return 0;
// }
