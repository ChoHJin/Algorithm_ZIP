// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, x;
//     cin >> n >> x;

//     vector<int> v(n);
//     int sum = 0, cnt = 1;

//     for(int i = 0; i < x; i++) {
//         cin >> v[i];
//         sum += v[i];
//     }

//     int ans = sum;

//     for(int i = x; i < n; i++) {
//         cin >> v[i];
//         sum += v[i] - v[i - x];

//         if(sum >= ans) {
//             if(sum == ans) {
//                 cnt++;
//             } else {
//                 ans = sum;
//                 cnt = 1;
//             }
//         }
//     }

//     if(ans == 0) {
//         cout << "SAD" << endl;
//     } else {
//         cout << ans << '\n' << cnt << endl;
//     }

//     return 0;
// }