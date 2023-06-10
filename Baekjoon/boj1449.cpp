// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, l;
//     cin >> n >> l;

//     int hole[1001];

//     for(int i = 0; i < n; i++) {
//         cin >> hole[i];
//     }

//     sort(hole, hole + n);

//     int ans = 1;
//     int start = hole[0];


//     for(int i = 0; i < n; i++) {
//         if(hole[i] - start + 1 > l) {
//             ans++;
//             start = hole[i];
//         } 
//     }

//     cout << ans << endl;

//     return 0;
// }