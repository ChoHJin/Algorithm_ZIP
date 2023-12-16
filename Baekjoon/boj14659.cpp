// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> height(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> height[i];
//     }

//     int maxKill = 0; // 최대 킬 수
//     int currentKill = 0; // 현재 킬 수
//     int maxHeight = height[0]; // 현재까지의 최대 높이

//     for (int i = 1; i < n; ++i) {
//         if (height[i] < maxHeight) {
//             // 현재 높이가 이전까지의 최대 높이보다 작으면 킬 수 증가
//             currentKill++;
//         } else {
//             // 현재 높이가 이전까지의 최대 높이보다 크면 최대 킬 수 갱신하고 현재 킬 수 초기화
//             maxKill = max(maxKill, currentKill);
//             currentKill = 0;
//             maxHeight = height[i];
//         }
//     }

//     // 마지막 부분에서의 최대 킬 수도 확인
//     maxKill = max(maxKill, currentKill);

//     cout << maxKill << endl;

//     return 0;
// }
