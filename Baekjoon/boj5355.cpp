// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--) {
//         double n;
//         string s;

//         cin >> n;
//         getline(cin, s);

//         for(int i = 0; i < s.size(); i++) {
//             switch (s[i])   {
//             case '@' :
//                 n *= 3;
//                 break;
//             case '#' :
//                 n -= 7;
//                 break;
//             case '%' : 
//                 n += 5;
//                 break;
//             }
//         }

//         cout << fixed;
//         cout.precision(2);
//         cout << n << endl;
//     }

//     return 0;
// }