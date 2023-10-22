// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>

// using namespace std;

// vector<int> nums;
// vector<int> v;
// set<vector<int>> result;
// int n, m;

// void bt(int idx, int cnt, vector<bool>& visited) {
//     if (cnt == m) {
//         result.insert(v);
//         return;
//     }

//     for (int i = idx; i < n; ++i) {
//         if (!visited[i]) {
//             visited[i] = true;
//             v.push_back(nums[i]);
//             bt(i, cnt + 1, visited);
//             v.pop_back();
//             visited[i] = false;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     nums.resize(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> nums[i];
//     }

//     sort(nums.begin(), nums.end());
    
//     vector<bool> visited(n, false);

//     bt(0, 0, visited);

//     for (const auto& res : result) {
//         for (int num : res) {
//             cout << num << ' ';
//         }
//         cout << '\n';
//     }

//     return 0;
// }
