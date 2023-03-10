// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// int calc(vector<int>& nums) {
//     int res = 0;
//     for (int i = 1; i < nums.size(); ++i) {
//         res += abs(nums[i] - nums[i-1]);
//     }
//     return res;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> nums(n);
    
//     for (int i = 0; i < n; ++i) {
//         cin >> nums[i];
//     }
//     sort(nums.begin(), nums.end());
    
//     int ans = 0;
//     do {
//         ans = max(ans, calc(nums));
//     } while (next_permutation(nums.begin(), nums.end()));

//     cout << ans << '\n';

//     return 0;
// }