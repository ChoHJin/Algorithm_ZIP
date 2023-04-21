// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> map;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m, b;
//     cin >> n >> m >> b;

//     int maxH = 0, minH = 256;
//     long long sum = 0;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             int h; cin >> h;
//             map.push_back(h);

//             maxH = max(maxH, h);
//             minH = min(minH, h);
//             sum += h;
//         }
//     }

//     int ansTime = 1e9;
//     int ansHeight = -1;

//     for(int i = minH; i <= maxH; i++) {
//         int time = 0;
//         int block = b;

//         for(int h : map) {
//             if(h > i) {
//                 time += 2 * (h - i);
//                 block += h - i;
//             }
//             else {
//                 time += i - h;
//                 block -= i - h;
//             }
//         }
//         if(block < 0) continue;
//         if(time < ansTime || (time == ansTime && i > ansHeight)) {
//             ansTime = time;
//             ansHeight = i;
//         }
//     }
//     cout << ansTime << " " << ansHeight << endl;

//     return 0;
// }