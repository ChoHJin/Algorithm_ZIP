// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> sk;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     int num = 0;

//     cin >> n;

//     sk.resize(n);

//     for(int i = 0; i < n; i++) {
//         cin >> sk[i];
//     }

//     sort(sk.begin(), sk.end());

//     cin >> m;

//     for(int i = 0; i < m; i++) {
//         int ans;

//         cin >> num;

//         ans = upper_bound(sk.begin(), sk.end(), num) - lower_bound(sk.begin(), sk.end(), num);

//         cout << ans << " ";
//     }

//     cout << endl;

//     return 0;
// }