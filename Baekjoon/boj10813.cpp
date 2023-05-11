// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<int> v(n);

//     for(int i = 0; i < n; i++) {
//         v[i] = i + 1;
//     }
    
//     for(int i = 0; i < m; i++) {
//         int a, b;
//         cin >> a >> b;
        
//         swap(v[a - 1], v[b - 1]);
//     }

//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }