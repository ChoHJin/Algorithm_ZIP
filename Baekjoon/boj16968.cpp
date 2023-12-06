// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string pat;
//     cin >> pat;

//     int cnt = 1;

//     for(int i = 0; i < pat.length(); i++) {
//         char curChar = pat[i];
//         int m;

//         if(curChar == 'c') {
//             m = (i > 0 && pat[i - 1] == 'c') ? 25 : 26;
//         } else {
//             m = (i > 0 && pat[i - 1] == 'd') ? 9 : 10;
//         }

//         cnt *= m;
//     }

//     cout << cnt << endl;

//     return 0;
// }