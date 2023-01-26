// #include <iostream>

// using namespace std;

// string a, b;
// char c;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> a >> c >> b;

//     if(c == '+') {
//         if(a.size() > b.size()) {
//             string res = a;
//             int idx = a.size() - b.size();
//             res[idx] = '1';
//             cout << res << endl;
//         }
//         else if(a.size() == b.size()) {
//             string res = a;
//             res[0] = '2';
//             cout << res << endl;
//         }
//         else {
//             string res = b;
//             int idx = b.size() - a.size();
//             res[idx] = '1';
//             cout << res << endl;
//         }
//     }
//     else {
//         int len = a.size() + b.size() - 2;
//         string res = "1";
//         for(int i = 0; i < len; i++) {
//             res += '0';
//         }
//         cout << res << endl;
//     }

//     return 0;
// }