// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     while(1) {
//         string s;
//         int cnt = 0;

//         getline(cin, s);

//         if(s == "#") {
//             break;
//         }
//         for(int i = 0; i < s.length(); i++) {
//             if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
//                 cnt++;
//             }
//             else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
//                 cnt++;
//             }
//         }
//         cout << cnt << endl;
//     }

//     return 0;
// }