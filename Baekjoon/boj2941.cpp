// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string str[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
//     string s;
//     int cnt;

//     cin >> s;

//     for(int i = 0; i < 8; i++) {
//         while(1) {
//             int idx = s.find(str[i]);
//             if(idx == string::npos) {
//                 break;
//             }
//             s.replace(idx, str[i].length(), "#");
//         }
//     }

//     cnt = s.length();

//     cout << cnt << endl;


//     return 0;
// }