// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     if(n == 0) {
//         cout << 0 << endl;
//         return 0;
//     }

//     vector<int> v(n);
//     int ans = 0;
//     double sum = 0;

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     int cnt = ceil(n * 0.15);
//     cnt = min(cnt, n / 2);
//     v.erase(v.begin(), v.begin() + cnt);
//     v.erase(v.end() - cnt, v.end());

//     for(int i : v) {
//         sum += i;
//     }

//     ans = round(sum / v.size());

//     cout << ans << endl;    

//     return 0;
// }