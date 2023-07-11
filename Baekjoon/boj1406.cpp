// #include <iostream>
// #include <string>
// #include <list>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     int n;

//     cin >> s >> n;

//     list<char> editor(s.begin(), s.end());

//     auto cursor = editor.end();

//     for(int i = 0; i < n; i++) {
//         char command;
//         cin >> command;

//         if(command == 'L') {
//             if(cursor != editor.begin()) {
//                 cursor--;
//             }
//         } else if(command == 'D') {
//             if(cursor != editor.end()) {
//                 cursor++;
//             }
//         } else if(command == 'B') {
//             if(cursor != editor.begin()) {
//                 cursor--;
//                 cursor = editor.erase(cursor);
//             }
//         } else if(command == 'P') {
//             char ch;
//             cin >> ch;

//             editor.insert(cursor, ch);
//         }
//     }

//     for(char ch : editor) {
//         cout << ch;
//     }

//     return 0;
// }