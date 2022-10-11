// #include <iostream>
// #include <vector>

// using namespace std;

// vector<vector<int>> map(101, vector<int>(101));

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int cnt = 0;
//     int lx, ly, rx, ry;

//     for(int i = 0; i < 4; i++) {
//         cin >> lx >> ly >> rx >> ry;

//         for(int j = ly; j < ry; j++) {
//             for(int k = lx; k < rx; k++) {
//                 map[j][k] = 1;
//             }
//         }
//     }

//     for(int i = 0; i < map.size(); i++) {
//         for(int j = 0; j < map.size(); j++) {
//             if(map[i][j] == 1) {
//                 cnt++;
//             }
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }