// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string str, s1, s2, s3;
//     string ans = "";
//     cin >> str;

//     for(int i = 1; i < str.length() - 1; i++) {
//         for(int j = 1; j <str.length() - i; j++) {
//             s1 = str.substr(0, i);
//             s2 = str.substr(i, j);
//             s3 = str.substr(i + j);

//             reverse(s1.begin(), s1.end());
//             reverse(s2.begin(), s2.end());
//             reverse(s3.begin(), s3.end());

//             if(ans == "") {
//                 ans = s1 + s2 + s3;
//             } 

//             if(s1 + s2 + s3 < ans) {
//                 ans = s1 + s2 + s3;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }