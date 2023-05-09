// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     for(int i = 1; i <= n; i++) {
//         v.push_back(i);
//     }

//     for(int i = 0; i < m; i++) {
//         int a, b;
//         cin >> a >> b;

//         reverse(v.begin() + (a - 1), v.begin() + b);
//     }

//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }

//     return 0;
// }