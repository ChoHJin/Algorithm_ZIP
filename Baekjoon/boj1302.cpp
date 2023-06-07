// #include <iostream>
// #include <algorithm>
// #include <map>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     map<string, int> books;

//     for(int i = 0; i < n; i++) {
//         string s;
//         cin >> s;

//         books[s]++;
//     }

//     string ans;
//     int cnt = 0;

//     for(auto it = books.begin(); it != books.end(); it++) {
//         if(it -> second > cnt) {
//             cnt = it->second;
//             ans = it->first;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }