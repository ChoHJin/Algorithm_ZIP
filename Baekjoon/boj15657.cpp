// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> v;
// vector<int> ans;
// bool visited[8];

// int n, m;

// void dfs(int cnt) {
//     if(cnt == m) {
//         for(int i = 0; i < m; i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//         return;
//     }

//     for(int i = 0; i < n; i++) {
//         if(!ans.empty()) {
//             if(ans.back() <= v[i]) {
//                 ans.push_back(v[i]);
//             } else continue;
//         } else {
//             ans.push_back(v[i]);
//         }

//         dfs(cnt + 1);

//         ans.pop_back();
//     }

//     return;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         int num;
//         cin >> num;
//         v.push_back(num);
//     }

//     sort(v.begin(), v.end());

//     dfs(0);

//     return 0;
// }