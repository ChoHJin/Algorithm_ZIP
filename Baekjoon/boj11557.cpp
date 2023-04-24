// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         map<int, string> schools;
//         for(int i = 0; i < n; i++) {
//             string name;
//             int alc;
//             cin >> name >> alc;
//             schools[alc] = name;
//         }

//         auto it = --schools.end(); // key 값이 가장 큰 value를 가리키는 iterator
//         cout << it->second << '\n';
//     }

//     return 0;
// }
