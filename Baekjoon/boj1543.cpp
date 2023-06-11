// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string text, s;
//     getline(cin, text);
//     getline(cin, s);

//     int ans = 0;
//     int textLen = text.length();
//     int len = s.length();

//     for(int i = 0; i <= textLen - len; i++) {
//         bool match = true;

//         for(int j = 0; j < len; j++) {
//             if(text[i + j] != s[j]) {
//                 match = false;
//                 break;
//             }
//         }

//         if(match) {
//             ans++;
//             i += len - 1;
//         }
//     }
    

//     cout << ans << endl;

//     return 0;
// }