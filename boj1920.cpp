// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// vector<int> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m, num;

//     cin >> n;

//     v.resize(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     cin >> m;

//     for(int i = 0; i < m; i++) {
//         cin >> num;

//         if(binary_search(v.begin(), v.end(), num)) {
//             cout << 1 << "\n";
//         }

//         else 
//             cout << 0 << "\n";
//     }
    
//     return 0;
// }