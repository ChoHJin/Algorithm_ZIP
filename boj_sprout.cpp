// // #include <iostream>

// // using namespace std;

// // bool s[31];

// // int main() {
// //     int n;
    
// //     for(int i = 1; i <= 28; i++) {
// //         cin >> n;
        
// //         s[n] = 1;
// //     }

// //     for(int i = 1; i <= 30; i++) {
// //         if(s[i] == 0) {
// //             cout << i << endl;
// //         }
// //     }

// //     return 0;
// // }

// #include <iostream>

// using namespace std;

// int a[101][101];
// int b[101][101];

// int main() {
//     int n, m;
    
//     cin >> n >> m;
    
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> a[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> b[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             cout << a[i][j] + b[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     cin >> s;

//     for(int i = 0; i < s.length(); i++) {
//         if(s[i] >= 65 && s[i] <= 90) {
//             s[i] += 32;
//         }
//         else {
//             s[i] -= 32;
//         }
//     }

//     cout << s << endl;


//     return 0;
// }