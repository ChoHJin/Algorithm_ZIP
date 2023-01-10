// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--) {
//         int n, m;
//         int cnt = 0;

//         cin >> n >> m;

//         for(int i = n; i <= m; i++) {
//             for(int j = 0; j < to_string(i).length(); j++) {
//                 if(to_string(i)[j] == '0') cnt++;
//             }
//         }

//         cout << cnt << endl;
//     }

//     return 0;
// }