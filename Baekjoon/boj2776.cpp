// #include <iostream>
// #include <set>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--) {
//         int n, m;

//         cin >> n;
        
//         set<int> note;

//         for(int i = 0; i < n; i++) {
//             int num;
//             cin >> num;

//             note.insert(num);
//         }

//         cin >> m;

//         for(int i = 0; i < m; i++) {
//             int num;
//             cin >> num;

//             if(note.find(num) != note.end()) {
//                 cout << 1 << '\n';
//             } else {
//                 cout << 0 << '\n';
//             }
//         }
//     }

//     return 0;
// }