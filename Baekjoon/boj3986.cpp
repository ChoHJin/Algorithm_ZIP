// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int cnt = 0;
    
//     for(int i = 0; i < n; i++) {
//         string s;
//         cin >> s;

//         stack<char> st;
        
//         for(char ch : s) {
//             if(!st.empty() && st.top() == ch) {
//                 st.pop();
//             } else {
//                 st.push(ch);
//             }
//         }

//         if(st.empty()) {
//             cnt++;
//         }
//     }

//     cout << cnt << endl;


//     return 0;
// }