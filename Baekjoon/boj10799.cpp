// #include <iostream>
// #include <stack>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     stack<char> st;
//     int ans = 0;
    
//     cin >> s;

//     for(int i = 0; i < s.length(); i++) {
//         if(s[i] == '(') {
//             st.push(s[i]);
//         } else {
//             st.pop();
//             if(s[i - 1] == '(') {
//                 ans += st.size();
//             } else {
//                 ans++;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }