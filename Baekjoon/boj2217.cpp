// #include <iostream>
// #include <algorithm>

// using namespace std;

// int rope[100001];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int ans = 0;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> rope[i];
//     }

//     sort(rope, rope + n);

//     for(int i = 0; i < n; i++) {
//         ans = max(ans, (n - i) * rope[i]);
//     }

//     cout << ans << endl;    

//     return 0;
// }