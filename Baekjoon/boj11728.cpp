// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> a;
// vector<int> b;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;

//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         int num;
//         cin >> num;
//         a.push_back(num);
//     }
//     for(int i = 0; i < m; i++) {
//         int num;
//         cin >> num;
//         b.push_back(num);
//     }

//     // for(int i = 0; i < b.size(); i++) {
//     //     a.push_back(b[i]);
//     // }

//     // sort(a.begin(), a.end());

//     // for(int i = 0; i < a.size(); i++) {
//     //     cout << a[i] << " ";
//     // }

//     vector<int>::iterator it = a.end();
//     a.insert(it, b.begin(), b.end());

//     sort(a.begin(), a.end());

//     for(const auto& i : a) cout << i << " ";


//     return 0;
// }