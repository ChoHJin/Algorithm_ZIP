// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     int n, m;
//     int ans = 0;

//     cin >> n >> m;

//     cin >> s;

//     for(int i = 0; i < s.size(); i++) {
//         if(s[i+1] == 'O' && s[i + 2] == 'I') {
//             int iCnt = 0;

//             while(s[i] == 'I' && s[i + 1] == 'O') {
//                 i += 2;
//                 iCnt++;
                
//                 if(s[i] == 'I' && iCnt == n) {
//                     iCnt--;
//                     ans++;
//                 }
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }