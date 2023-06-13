// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> lvs(n);

//     for(int i = 0; i < n; i++) {
//         cin >> lvs[i];
//     }

//     int ans = 0;

//     for(int i = n - 2; i >= 0; i--) {
//         if(lvs[i] >= lvs[i + 1]) {
//             ans += lvs[i] - lvs[i + 1] + 1;
//             lvs[i] = lvs[i + 1] - 1;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }