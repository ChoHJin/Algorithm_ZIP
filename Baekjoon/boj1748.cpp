// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int ans = 0;
//     int num = 1;

//     for (int i = 1, len = 1; i <= n; i *= 10, len++) {
//         int end = i * 10 - 1;
//         if (end > n) end = n;
//         ans += (end - i + 1) * len;
//     }

//     cout << ans << '\n';

//     return 0;
// }