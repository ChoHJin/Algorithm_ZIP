// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     int cnt1 = 0;
//     int cnt0 = 0;

//     cin >> s;

//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] != s[i + 1]) {
//             if(s[i] == '0') cnt0++;
//             else cnt1++;
//         }
//     }

//     cout << min(cnt0, cnt1) << endl;

//     return 0;
// }