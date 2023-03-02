// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// vector<int> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for(int i = 0; i < 5; i++) {
//         int n;
//         cin >> n;
        
//         v.push_back(n);
//     }

//     for(int i = 0; i < 4; i++) {
//         for(int j = 0; j < 4 - i; j++) {
//             if(v[j] > v[j + 1]) {
//                 swap(v[j], v[j + 1]);

//                 for(auto k : v) {
//                     cout << k << " ";
//                 }
//                 cout << endl;
//             }
//         }
//     }

//     return 0;
// }