// #include <iostream>
// #include <map>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     int cnt = 0;

//     cin >> n >> m;

//     map<string, bool> hm;
//     string str;

//     for(int i = 0; i < n; i++) {
//         cin >> str;
//         hm[str] = true;
//     }

//     for(int i = 0; i < m; i++) {
//         cin >> str;
//         if(hm[str] == true) {
//             cnt++;
//         }
//     }

//     cout << cnt << '\n';

//     return 0;
// }