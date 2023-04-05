// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long n, cnt = 0;
//     cin >> n;

//     for (long long i = 1, j = 1, sum = 0; i <= n; ++i) {
//         sum += i;

//         while (sum > n) {
//             sum -= j;
//             ++j;
//         }

//         if (sum == n) ++cnt;
//     }

//     cout << cnt << '\n';

//     return 0;
// }
