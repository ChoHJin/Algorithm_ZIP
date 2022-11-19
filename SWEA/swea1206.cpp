// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int map[1001];
// //vector<int> map;



// int main(int argc, char** argv) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int test_case;
//     int T = 10;
// /*
// 여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
// */
//     for(test_case = 1; test_case <= T; ++test_case) {
//         int n;
//         int ans = 0;
//         // int cnt = 0;
//         cin >> n;

//         for(int i = 0; i < n; i++) {
//             cin >> map[i];
//             //int height;
//             //cin >> height;
//             //map.push_back(height);
//         }

//         for(int i = 2; i <= n - 2; i++) {
//             int maxCnt = 0;
//             if((map[i] > map[i - 1] && map[i] > map[i - 2]) && (map[i] > map[i + 1] && map[i] > map[i + 2])) {
//                 maxCnt = max(max(map[i - 1], map[i - 2]), max(map[i + 1], map[i + 2]));
//                 ans += (map[i] - maxCnt);
//             }
//             else continue;
//         }


//         cout << "#" << test_case << " ";
//         cout << ans << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }