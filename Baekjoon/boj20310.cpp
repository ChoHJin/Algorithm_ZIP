// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     int cnt0 = 0;
//     int cnt1 = 0;

//     cin >> s;

//     for(auto i : s) {
//         if(i == '0') {
//             cnt0++;
//         }
//         else cnt1++;
//     }

//     int tanos0 = cnt0 / 2;
//     int tanos1 = cnt1 / 2;

//     while(cnt0 != tanos0) {
//         int idx = s.rfind('0');
//         if(idx != string::npos) {
//             s.erase(idx, 1);
//             cnt0--;
//         }
//     }

//     while(cnt1 != tanos1) {
//         int idx = s.find('1');
//         if(idx != string::npos) {
//             s.erase(idx, 1);
//             cnt1--;
//         }
//     }

//     cout << s << endl;

//     return 0;
// }