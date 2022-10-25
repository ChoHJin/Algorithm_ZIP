// #include <iostream>
// #include <string>
// #include <stack>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     while(1) {
//         string str;
//         stack<char> s;
//         bool check = true;

//         getline(cin, str);
        
//         if(str == ".") {
//             break;
//         }

//         for(int i = 0; i < str.length(); i++) {
//             if(str[i] == '(' || str[i] == '[') {
//                 s.push(str[i]);
//             }

//             if(str[i] == ')') {
//                 if(s.empty() || s.top() == '[') {
//                     check = false;
//                 }
//                 else {
//                     s.pop();
//                 }
//             }
//             if(str[i] == ']') {
//                 if(s.empty() || s.top() == '(') {
//                     check = false;
//                 }
//                 else {
//                     s.pop();
//                 }
//             }
//         }
//         if(s.empty() && check) {
//             cout << "yes" << endl;
//         }
//         else {
//             cout << "no" << endl;
//         }
//     }

//     return 0;
// }