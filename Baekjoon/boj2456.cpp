// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<vector<int>> candidates(3, vector<int>(4, 0));  // 후보들의 득표수와 총 점수를 저장

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 3; j++) {
//             int vote;
//             cin >> vote;

//             candidates[j][0] += vote;        // 득표수 누적
//             candidates[j][j + 1] += vote * vote;  // 총 점수 누적
//         }
//     }

//     vector<pair<int, pair<int, int>>> results;  // 득표수, 총 점수, 후보 번호를 저장하는 pair를 저장

//     for (int i = 0; i < 3; i++) {
//         results.push_back({candidates[i][0], {candidates[i][i + 1], i + 1}});
//     }

//     sort(results.begin(), results.end(), greater<pair<int, pair<int, int>>>());

//     if (results[0].first == results[1].first && results[0].second.first == results[1].second.first) {
//         cout << "0 " << results[0].first << endl;
//     } else {
//         cout << results[0].second.second << " " << results[0].first << endl;
//     }

//     return 0;
// }