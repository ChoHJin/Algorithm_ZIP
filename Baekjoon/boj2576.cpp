// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int sum = 0;
//     int m = 100;

//     for(int i = 0; i < 7; i++) {
//         int n;
//         cin >> n;

//         if(n % 2 == 1) {
//             v.push_back(n);
//             sum += n;

//             if(n < m) m = n;
//         }
//     }

//     if(v.empty()) {
//         cout << -1 << endl;
//         return 0;
//     }

//     cout << sum << endl;
//     cout << m << endl;

//     return 0;
// }