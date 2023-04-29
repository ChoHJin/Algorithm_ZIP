// #include <iostream>
// #include <string>
// #include <map>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     map<char, int> m;

//     for(int i = 0; i < n; i++) {
//         string name;
//         cin >> name;

//         char firstName = name[0];
//         m[firstName]++;
//     }

//     int cnt = 0;
//     for(auto it : m) {
//         if(it.second >= 5) {
//             cnt++;
//             cout << it.first;
//         }
//     }

//     if(cnt == 0) {
//         cout << "PREDAJA";
//     }

//     cout << endl;

//     return 0;
// }