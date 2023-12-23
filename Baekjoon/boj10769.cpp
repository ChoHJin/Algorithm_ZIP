// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string str;
//     int h = 0, s = 0;

//     getline(cin, str);

//     for(int i = 0; i < str.size() - 2; i++) {
//         if(str[i] == ':' && str[i + 1] == '-') {
//             if(str[i + 2] == ')') {
//                 h++;
//             } else {
//                 s++;
//             }
//         }
//     }

//     if(h == 0 && s == 0) {
//         cout << "none" << endl;
//     } else if(h == s) {
//         cout << "unsure" << endl;
//     } else if(h > s) {
//         cout << "happy" << endl;
//     } else cout << "sad" << endl;

//     return 0;
// }