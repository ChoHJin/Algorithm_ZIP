// #include <iostream>
// #include <stack>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     string s;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         stack<char> ps;
//         cin >> s;

//         for(int j = 0; j < s.length(); j++) {
//             if(s[j] == '(') {
//                 ps.push(s[j]);
//             }

//             else {
//                 if(!ps.empty()) {
//                     ps.pop();
//                 }
//                 else {
//                     ps.push('(');
//                     break;
//                 }
//             }
//         }

//         if(ps.empty()) {
//             cout << "YES" << endl;
//         }
//         else 
//             cout << "NO" << endl;
//     }

//     return 0;

// }