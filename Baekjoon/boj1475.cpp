// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> numSet(10);

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     int ans = 1;

//     cin >> s;

//     for(int i = 0; i < s.size(); i++) {
//         for(int j = 0; j < 10; j++) {
//             if(s[i] - '0' == j) {
//                 numSet[j]++;
//             }
//         }
//     }
//     int num69 = (numSet[6] + numSet[9] + 1) / 2;
//     numSet[6] = num69;
//     numSet[9] = num69; 

//     for(int i = 0; i < numSet.size(); i++) {
//         if(ans < numSet[i]) {
//             ans = numSet[i];
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }