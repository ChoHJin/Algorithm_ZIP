// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int sum = 0;
//     int a = 0, b = 0;

//     for(int i = 0; i < 9; i++) {
//         int n;
//         cin >> n;
//         v.push_back(n);

//         sum += n;
//     }

//     for(int i = 0; i < 8; i++) {
//         for(int j = i + 1; j < 9; j++) {
//             if(sum - (v[i] + v[j]) == 100) {
//                 a = v[i];
//                 b = v[j];
//             }
//         }
//     }

//     for(int i = 0; i < 9; i++) {
//         if(v[i] == a || v[i] == b) {
//             continue;
//         } else cout << v[i] << endl;
//     }

//     return 0;
// }