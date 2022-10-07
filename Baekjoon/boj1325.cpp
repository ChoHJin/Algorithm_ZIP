// #include <iostream>
// #include <vector>
// #include <cstring>
// #include <queue>
// #include <algorithm>

// using namespace std;

// int n, m;
// vector<int> com[10001];
// bool visited[10001];
// int cnt;


// // queue<int> q;
// // vector<pair<int, int>> v;
// // int cnt = 1;

// void dfs(int x) {
//     visited[x] = true;
//     cnt++;

//     for(int i = 0; i < com[x].size(); i++) {
//         if(!visited[com[x][i]]) {
//             dfs(com[x][i]);
//         }
//     }
    
// }

// // 시간테스트용 bfs 
// // void bfs(int x) {
// //     visited[x] = true;
// //     q.push(x);

// //     while(!q.empty()) {
// //         x = q.front();
// //         q.pop();

// //         for(int i = 0; i < com[x].size(); i++) {
// //             int next = com[x][i];

// //             if(!visited[next]) {
// //                 visited[next] = true;
// //                 q.push(next);
// //                 cnt++;
// //             }
// //         }
// //     }
// // }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     vector<int> ans;
//     int tmp = 0;

//     cin >> n >> m;

//     for(int i = 0; i < m; i++) {
//         int a, b;

//         cin >> a >> b;

//         com[b].push_back(a);    //b를 해킹하면 a를 해킹할 수 있기 때문에 b에 a를 넣음
//     }

//     for(int i = 1; i <= n; i++) {
//         memset(visited, false, sizeof(visited));
//         cnt = 0;
//         dfs(i);

//         if(tmp < cnt) {
//             tmp = cnt;
//             ans.clear();
//             ans.push_back(i);
//         }
//         else if(tmp == cnt) {
//             ans.push_back(i);
//         }
//     }

//     sort(ans.begin(), ans.end());

//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }


//     //bfs 코드

//     // for(int i = 1; i <= n; i++) {
//     //     bfs(i);
//     //     memset(visited, false, sizeof(visited));
//     //     v.push_back(make_pair(i, cnt));
//     //     cnt = 1;
//     // }

//     // int maxCnt = -1;
//     // for(int i = 0; i < v.size(); i++) {
//     //     if(v[i].second > maxCnt) {
//     //         maxCnt = v[i].second;
//     //     }
//     // }

//     // for(int i = 0; i < v.size(); i++) {
//     //     if(v[i].second == maxCnt) {
//     //         cout << v[i].first << " ";
//     //     }
//     // }


//     cout << endl;

//     return 0;
// }