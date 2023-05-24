// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int cnt = 0;
//     string L, R;
//     cin >> L >> R;

//     if(L.length() != R.length()) {
//         cnt = 0;
//     }
//     else {
//         for(int i = 0; i < L.size(); i++) {
//             if(L[i] != R[i]) {
//                 break;
//             }

//             if(L[i] == R[i] && L[i] == '8') {
//                 cnt++;
//             }
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }