// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>

// using namespace std;

// int k;
// vector<char> signs;
// vector<int> numbers;
// vector<bool> visited;
// string maxResult, minResult;

// bool isSatisfied(const string& nums) {
//     for (int i = 0; i < k; i++) {
//         if (signs[i] == '<' && nums[i] >= nums[i + 1])
//             return false;
//         else if (signs[i] == '>' && nums[i] <= nums[i + 1])
//             return false;
//     }
//     return true;
// }

// void dfs(int depth, string nums) {
//     if (depth == k + 1) {
//         if (isSatisfied(nums)) {
//             if (maxResult.empty() || nums > maxResult)
//                 maxResult = nums;
//             if (minResult.empty() || nums < minResult)
//                 minResult = nums;
//         }
//         return;
//     }

//     for (int i = 0; i <= 9; i++) {
//         if (!visited[i]) {
//             visited[i] = true;
//             dfs(depth + 1, nums + to_string(i));
//             visited[i] = false;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     cin >> k;

//     signs.resize(k);
//     for (int i = 0; i < k; i++)
//         cin >> signs[i];

//     visited.resize(10, false);
//     dfs(0, "");

//     cout << maxResult << '\n';
//     cout << minResult << '\n';

//     return 0;
// }
