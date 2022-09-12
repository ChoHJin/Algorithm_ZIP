// #include <iostream>

// using namespace std;

// int main(int argc, char** argv) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, cnt;

//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         string s = to_string(i);
//         cnt = 0;
//         bool check = true;

//         for(int j = 0; j < s.size(); j++) {
//             if(s[j] == '3' || s[j] == '6' || s[j] == '9') {
//                 check = false;
//                 cnt++;
//             }
//         }

//         if(check) {
//             cout << i << " ";
//         }
//         else {
//             for(int k = 0; k < cnt; k++) {
//                 cout << "-";
//             }
//             cout << " ";
//         }
//     }

//     cout << endl;

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }