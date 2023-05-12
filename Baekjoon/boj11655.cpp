// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string str;
//     getline(cin, str);

//     for(int i = 0; i < str.size(); i++) {
//         char c = str[i];

//         if(c >= 'a' && c <= 'z') {
//             if(c - 'a' < 13) c += 13;
//             else c -= 13;
//         } else if(c >= 'A' && c <= 'Z') {
//             if(c - 'A' < 13) c += 13;
//             else c -= 13;
//         }

//         str[i] = c;
//     }

//     cout << str << endl;

//     return 0;
// }