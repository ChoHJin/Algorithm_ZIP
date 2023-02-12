// #include <iostream>
// #include <string>
// #include <vector>
// #include <sstream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;

//     cin >> t;
//     cin.ignore();

//     while(t--) {
//         string s;
//         vector<string> v;

//         getline(cin ,s);

//         stringstream sstream(s);

//         while(getline(sstream, s, ' ')) {
//             v.push_back(s);
//         }

//         for(int i = 0; i < v.size(); i++) {
//             reverse(v[i].begin(), v[i].end());
//         }

//         for(int i = 0; i < v.size(); i++) {
//             cout << v[i] << " ";
//         }
//     }

//     return 0;
// }