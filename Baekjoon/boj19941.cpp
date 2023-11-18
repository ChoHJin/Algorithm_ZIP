// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
//     cin >> n >> k;

//     vector<char> v(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     int ans = 0;

//     for(int i = 0; i < n; i++) {
//         if(v[i] != 'H') continue;

//         for(int j = i - k; j <= i + k; j++) {
//             if(j < 0 || j > n - 1) continue;

//             if(v[j] == 'P') {
//                 ans++;
//                 v[j] = 'a';
//                 break;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }