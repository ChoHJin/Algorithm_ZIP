// #include <iostream>

// using namespace std;

// int cnt;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     int n;
    
//     cin >> n;

//     while(n--) {
//         bool flag = true;
//         cin >> s;

//         for(int i = 0; i < s.length() - 1; i++) {
//             if(s[i] != s[i + 1]) {
//                 for(int j = i + 1; j < s.length(); j++) {
//                     if(s[i] == s[j]) {
//                         flag = false;
//                     }
//                 }
//             }
//         }

//         if(flag) {
//             cnt++;
//         }
//     }
    
//     cout << cnt << endl;

//     return 0;
// }