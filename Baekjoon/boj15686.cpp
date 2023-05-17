// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Point {
//     int x;
//     int y;
// };

// int n, m;
// vector<Point> chicken;
// vector<Point> house;
// vector<bool> visited;

// int minDist = 1e9;

// int getDist(Point p1, Point p2) {
//     return abs(p1.x - p2.x) + abs(p1.y - p2.y);
// }

// void calcDist() {
//     int totalDist = 0;

//     for(int i = 0; i < house.size(); i++) {
//         int minHouseDist = 1e9;

//         for(int j = 0; j < chicken.size(); j++) {
//             if(visited[j]) {
//                 int dist = getDist(house[i], chicken[j]);
//                 minHouseDist = min(minHouseDist, dist);
//             }
//         }

//         totalDist += minHouseDist;
//     }

//     minDist = min(minDist, totalDist);
// }

// void selectChicken(int idx, int cnt) {
//     if(cnt == m) {
//         calcDist();
//         return;
//     }
//     if(idx == chicken.size()) {
//         return;
//     }

//     visited[idx] = true;
//     selectChicken(idx + 1, cnt + 1);
//     visited[idx] = false;
//     selectChicken(idx + 1, cnt); 
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> m;

//     vector<vector<int>> map(n, vector<int>(n));

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             int type;
//             cin >> type;

//             if(type == 1) {
//                 house.push_back({i, j});
//             } else if(type == 2) {
//                 chicken.push_back({i, j});
//             }
//         }
//     }

//     visited.resize(chicken.size(), false);
//     selectChicken(0, 0);

//     cout << minDist << endl;

//     return 0;
// }