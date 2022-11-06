// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     int d = 0;

//     cin >> t;

//     for(int i = 0; i < t; i++) {
//         int cx, cy, cr;
//         int bx, by, br;
//         cin >> cx >> cy >> cr >> bx >> by >> br;

//         d = pow((cx - bx), 2) + pow((cy - by), 2);
//         int inscription = pow((cr - br), 2);
//         int circumscription = pow((cr + br), 2);

//         int ans = 0;

//         if(d == 0) {
//             if(inscription == 0) {
//                 ans = -1;
//             }
//             else {
//                 ans = 0;
//             }
//         }
//         else if(d == inscription || d == circumscription) {
//             ans = 1;
//         }
//         else if(inscription < d && d < circumscription) {
//             ans = 2;
//         }
//         else {
//             ans = 0;
//         }
        
//         cout << ans << endl;
//     }

//     return 0;
// }