// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string dial;
//     cin >> dial;

//     int ans = 0;

//     for(int i = 0; i < dial.size(); i++) {
//         if(dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C') {
//             ans += 3;
//         }
//         else if(dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F') {
//             ans += 4;
//         }
//         else if(dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I') {
//             ans += 5;
//         }
//         else if(dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L') {
//             ans += 6;
//         }
//         else if(dial[i] == 'M' || dial[i] == 'N' || dial[i] == 'O') {
//             ans += 7;
//         }
//         else if(dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' || dial[i] == 'S') {
//             ans += 8;
//         }
//         else if(dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V') {
//             ans += 9;
//         }
//         else if(dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' || dial[i] == 'Z') {
//             ans += 10;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string dial;
//     cin >> dial;

//     int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

//     int ans = 0;

//     for(int i = 0; i < dial.size(); i++) {
//         ans += time[dial[i] - '65'];
//     }

//     cout << ans << endl;

//     return 0;
//  }