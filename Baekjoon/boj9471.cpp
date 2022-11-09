// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int p;

//     cin >> p;

//     for(int i = 0; i < p; i++) {
//         int n, m;

//         cin >> n >> m;

//         v.push_back(0);
//         v.push_back(1);

//         int idx = 2;

//         while(1) {
//             v.push_back((v[idx - 1] + v[idx - 2]) % m);
//             if(v[idx - 1] % m == 0 && v[idx] % m == 1) {
//                 break;
//             }
//             idx++;
//         }

//         cout << n << " " << idx - 1 << endl;

//         v.clear();
//     }

//     return 0;
// }