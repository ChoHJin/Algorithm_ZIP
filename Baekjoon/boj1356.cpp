// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;

//     int left = 0, right = 0, pivot = 0;

//     bool ans = false;

//     for(int i = 0; i < s.size() - 1; i++) {
//         pivot++;
//         left = 1;
//         right = 1;

//         for(int j = 0; j < pivot; j++) {
//             left *= s[j] - '0';
//         }

//         for(int j = pivot; j < s.size(); j++) {
//             right *= s[j] - '0';
//         }

//         if(left == right) {
//             ans = true;
//             break;
//         }
//     }

//     if(ans == true) cout << "YES" << endl;
//     else cout << "NO" << endl;

//     return 0;
// }