// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     getline(cin, s);

//     bool isTag = false;

//     stack<char> stk;

//     for(char ch : s) {
//         if(ch == '<') {
//             while(!stk.empty()) {
//                 cout << stk.top();
//                 stk.pop();
//             }
//             isTag = true;

//             cout << ch;
//         } else if(ch == '>') {
//             isTag = false;

//             cout << ch;
//         } else if(isTag) {
//             cout << ch;
//         } else {
//             if(ch == ' ') {
//                 while(!stk.empty()) {
//                     cout << stk.top();
//                     stk.pop();
//                 }
//                 cout << ' ';
//             } else {
//                 stk.push(ch);
//             }
//         }
//     }

//     while(!stk.empty()) {
//         cout << stk.top();
//         stk.pop();
//     }

//     return 0;
// }