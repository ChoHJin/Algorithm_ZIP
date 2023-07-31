// #include <iostream>
// #include <unordered_map>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         unordered_map<string, int> clothes;

//         for(int i = 0; i < n; i++) {
//             string name, type;
//             cin >> name >> type;

//             clothes[type]++;
//         }

//         int ans = 1;

//         for(auto it = clothes.begin(); it != clothes.end(); it++) {
//             ans *= (it -> second + 1);
//         }

//         cout << ans - 1 << endl;
//     }

//     return 0;
// }