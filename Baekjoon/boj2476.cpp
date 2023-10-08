// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int ans = 0;

//     for(int i = 0; i < n; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;

//         int prize = 0;

//         if (a == b && b == c) {
//             prize = 10000 + a * 1000;
//         } else if (a == b || b == c || a == c) {
//             prize = 1000 + (a == b ? a : (b == c ? b : c)) * 100;
//         } else {
//             prize = max({a, b, c}) * 100;
//         }

//         ans = max(ans, prize);
//     }

//     cout << ans << endl;

//     return 0;
// }