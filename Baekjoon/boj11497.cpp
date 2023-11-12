// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         vector<int> v(n);

//         for(int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         sort(v.begin(), v.end());

//         vector<int> res(n);

//         int left = 0, right = n - 1;

//         for(int i = 0; i < n; i++) {
//             if(i % 2 == 0) {
//                 res[left++] = v[i];
//             } else {
//                 res[right--] = v[i];
//             }
//         }

//         int maxDiff = 0;

//         for(int i = 1; i < n; i++) {
//             maxDiff = max(maxDiff, abs(res[i] - res[i - 1]));
//         }

//         cout << maxDiff << endl;
//     }

//     return 0;
// }