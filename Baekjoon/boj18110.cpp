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

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     int cnt = round((float)(n * 3) / 20);

//     int ans = 0;
//     double sum = 0;

//     for(int i = cnt; i + cnt < n; i++) {
//         sum += v[i];
//     }

//     ans = round((float)sum / (n - cnt * 2));

//     cout << ans << endl;    

//     return 0;
// }