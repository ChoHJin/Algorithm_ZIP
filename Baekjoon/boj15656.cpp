// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> v;
// vector<int> nums;
// int n, m;

// void bt(int cnt) {
//     if(cnt == m) {
//         for(int i = 0; i < m; i++) {
//             cout << v[i] << ' ';
//         }
//         cout << '\n';
//         return;
//     }

//     for(int i = 0; i < n; i++) {
//         v.push_back(nums[i]);
//         bt(cnt + 1);
//         v.pop_back();
//     }
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         int num; cin >> num;
//         nums.push_back(num);
//     }

//     sort(nums.begin(), nums.end());

//     bt(0);

//     return 0;
// }