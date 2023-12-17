// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int a, b, c, x, y;
//     cin >> a >> b >> c >> x >> y;

//     int ans = 1e9;

//     for(int i = 0 ; i <= 100000; i++) {
//         int n = 2 * c * i;
//         int tmp1 = max(0, (x - i) * a);
//         int tmp2 = max(0, (y - i) * b);

//         ans = min(ans, n + tmp1 + tmp2);
//     }

//     cout << ans << endl;

//     return 0;
// }