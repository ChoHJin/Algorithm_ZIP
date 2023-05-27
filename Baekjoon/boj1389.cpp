// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int INF = 1e9;

// void FW(vector<vector<int>> & g) {
//     for(int k = 1; k < g.size(); k++) {
//         for(int i = 1; i < g.size(); i++) {
//             for(int j = 1; j < g.size(); j++) {
//                 if(g[i][k] != INF && g[k][j] != INF) {
//                     g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
//                 }
//             }
//         }
//     }
// }

// int findBaconNum(vector<vector<int>>& g) {
//     int minKB = INF;
//     int minPerson = 0;

//     for(int i = 1; i < g.size(); i++) {
//         int sum = 0;
        
//         for(int j = 1; j < g.size(); j++) {
//             sum += g[i][j];
//         }

//         if(sum < minKB) {
//             minKB = sum;
//             minPerson = i;
//         }
//     }

//     return minPerson;
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> v(n + 1, vector<int>(n + 1, INF));

//     for(int i = 1; i <= n; i++) {
//         v[i][i] = 0;
//     }

//     for(int i = 0; i < m; i++) {
//         int a, b;
//         cin >> a >> b;

//         v[a][b] = 1;
//         v[b][a] = 1; 
//     }

//     FW(v);

//     int ans = findBaconNum(v);

//     cout << ans << endl;

//     return 0;
// }