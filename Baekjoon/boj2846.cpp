// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> height(n);

//     for (int i = 0; i < n; i++) {
//         cin >> height[i];
//     }

//     int ans = 0;
//     int start = 0;
//     for (int i = 1; i < n; i++) {
//         if (height[i] > height[i-1]) {
//             ans = max(ans, height[i] - height[start]);
//         } else {
//             start = i;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }