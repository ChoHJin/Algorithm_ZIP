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
// //             cout << i ;
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
//         cout ;
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

//     cout << s ;

//     return 0;
// }

// 9086

// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     string s;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> s;

//         cout << s[0] << s[s.size() - 1] ;
//     }

//     return 0;
// }

// 2743

// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     cin >> s;

//     cout << s.length() ;

//     return 0;
// }

// 10809

// #include <iostream>

// using namespace std;

// int arr[26];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     cin >> s;

//     for(int i = 0; i < 26; i++) {
//         arr[i] = -1;
//     }

//     for(int i = 0; i < s.length(); i++) {
//         if(arr[(int)s[i] - 97] < 0) {
//             arr[(int)s[i] - 97] = i;
//         }
//     }

//     for(int i = 0; i < 26; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// 11718

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     while(getline(cin, s)) {
//         cout << s ;
//     }

//     return 0;
// }

// 2754

// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;

//     cin >> s;

//     if (s == "A+")
//         cout << "4.3" ;

//     else if (s == "A0")
//         cout << "4.0" ;

//     else if (s == "A-")
//         cout << "3.7" ;

//     else if (s == "B+")
//         cout << "3.3" ;

//     else if (s == "B0")
//         cout << "3.0" ;

//     else if (s == "B-")
//         cout << "2.7" ;

//     else if (s == "C+")
//         cout << "2.3" ;

//     else if (s == "C0")
//         cout << "2.0" ;

//     else if (s == "C-")
//         cout << "1.7" ;

//     else if (s == "D+")
//         cout << "1.3" ;

//     else if (s == "D0")
//         cout << "1.0" ;

//     else if (s == "D-")
//         cout << "0.7" ;

//     else if (s == "F")
//         cout << "0.0" ;

//     return 0;
// }