// #include <iostream>
// #include <vector>

// using namespace std;

// const int INF = 1e9;
// int friends[51][51];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         string s;
//         cin >> s;

//         for(int j = 0; j < s.size(); j++) {
//             if(i == j) {
//                 friends[i][j] = 0;
//             } else {
//                 friends[i][j] = s[j] == 'Y' ? 1 : INF;
//             }
//         }   
//     }

//     for (int k = 0; k < n; k++) {
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if(i == j || j == k || i == k) continue;
//                 else if(friends[i][j] > friends[i][k] + friends[k][j]) {
//                     friends[i][j] = friends[i][k] + friends[k][j];
//                 }
//             }
//         }
//     }

//     int maxFriends = 0;

//     for (int i = 0; i < n; i++) {
//         int cnt = 0;

//         for (int j = 0; j < n; j++) {
//             if(i == j) continue;
//             else if(friends[i][j] <= 2) {
//                 cnt++;
//             }
//         }

//         maxFriends = max(maxFriends, cnt);
//     }

//     cout << maxFriends << endl;

//     return 0;
// }
