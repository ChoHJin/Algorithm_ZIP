// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     int ans = 1;

//     for(int i = 0; i < n; i++) {
//         int cnt = 1;

//         for(int j = i + 1; j < i + 5; j++) {
//             if(v[j] - v[i] < 5 && v[j] - v[i] > 0) {
//                 cnt++;
//             } 
//         }
//         ans = max(ans, cnt);
//     }

//     if(ans >= 5) {
//         cout << 0 << endl;
//     } else {
//         cout << 5 - ans << endl;
//     }

//     return 0;
// }