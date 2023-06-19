// #include <iostream>
// #include <unordered_map>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;

//     cin >> n >> m;

//     unordered_map<string, string> info;

//     for(int i = 0; i < n; i++) {
//         string site, pw;

//         cin >> site >> pw;

//         info[site] = pw;
//     }

//     for(int i = 0; i < m; i++) {
//         string findSite;
//         cin >> findSite;

//         // if(info.find(findSite) != info.end()) {
//         //     cout << info[findSite] << '\n';
//         // }
//         cout << info[findSite] << '\n';
//     }

//     return 0;
// }