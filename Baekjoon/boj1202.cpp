// #include <iostream>
// #include <queue>
// #include <vector>
// #include <algorithm>

// using namespace std;

// priority_queue<int> pq;
// vector<int> bag;
// vector<pair<int, int>> jewerlyInfo;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
//     cin >> n >> k;

//     for(int i = 0; i < n; i++) {
//         int m, v;
//         cin >> m >> v;

//         jewerlyInfo.push_back(make_pair(m, v));
//     }

//     for(int i = 0; i < k; i++) {
//         int c;
//         cin >> c;

//         bag.push_back(c);
//     }

//     sort(jewerlyInfo.begin(), jewerlyInfo.end());
//     sort(bag.begin(), bag.end());

//     long long ans = 0;
//     int idx = 0;

//     for(int i = 0; i < k; i++) {
//         while(idx < n && jewerlyInfo[idx].first <= bag[i]) {
//             pq.push(jewerlyInfo[idx].second);
//             idx++;
//         }

//         if(!pq.empty()) {
//             ans += pq.top();
//             pq.pop();
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }