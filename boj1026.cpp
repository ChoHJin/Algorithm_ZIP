// #include <iostream>
// #include <algorithm>

// using namespace std;

// int a[101];
// int b[101];
// int sum;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     for(int i = 0; i < n; i++) {
//         cin >> b[i];
//     }

//     sort(a, a+n);
//     sort(b, b+n, greater<>());

//     for(int i = 0; i < n; i++) {
//         sum += a[i] * b[i];
//     }

//     cout << sum << endl;

//     return 0;
// }