// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int tmp = 0, ans = 0;
//     string s;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> s;

//         for(int j = 0; j < s.length(); j++) {
//             if(s[j] == 'O') {
//                 tmp++;
//                 ans += tmp;
                
//             }
//             else if(s[j] == 'X') {
//                 tmp = 0;
//             }
//         }

//         cout << ans << endl;
        
//         tmp = 0;
//         ans = 0;
//     }

//     return 0;
// }