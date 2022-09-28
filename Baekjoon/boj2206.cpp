// #include <iostream>
// #include <algorithm>

// using namespace std;

// int house[1001][3];
// int ans;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n;

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < 3; j++) {
//             cin >> house[i][j];
//         }
//     }

//     for(int i = 1; i < n; i++) {
//         house[i][0] += min(house[i - 1][1], house[i - 1][2]);   //R
//         house[i][1] += min(house[i - 1][0], house[i - 1][2]);   //G
//         house[i][2] += min(house[i - 1][0], house[i - 1][1]);   //B
//     }

//     ans = min({house[n - 1][0], house[n - 1][1], house[n - 1][2]}); //원소가 3개 이상일 시 {} 사용.

//     cout << ans << endl;

//     return 0;
// }