// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// int calculate(const string& str) {
//     stack<char> stk;

//     int res = 0;
//     int tmp = 1;

//     for(int i = 0; i < str.length(); i++) {
//         char ch = str[i];

//         if(ch == '(') {
//             stk.push(ch);
//             tmp *= 2;
//         } else if(ch == '[') {
//             stk.push(ch);
//             tmp *= 3;
//         } else if(ch == ')') {
//             if(stk.empty() || stk.top() != '(') {
//                 return 0;
//             }

//             if(str[i - 1] == '(') {
//                 res += tmp;
//             }

//             stk.pop();
//             tmp /= 2;
//         } else if(ch == ']') {
//             if(stk.empty() || stk.top() != '[') {
//                 return 0;
//             }

//             if(str[i - 1] == '[') {
//                 res += tmp;
//             }

//             stk.pop();
//             tmp /= 3;
//         }
//     }

//     if(!stk.empty()) {
//         return 0;
//     }

//     return res;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;

//     int ans = calculate(s);

//     cout << ans << '\n';

//     return 0;
// }