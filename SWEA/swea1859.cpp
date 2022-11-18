// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> v;

// int main(int argc, char** argv) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int test_case;
//     int T;

//     cin>>T;
// /*
// 여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
// */
//     for(test_case = 1; test_case <= T; ++test_case) {
//         int n;

//         cin >> n;

//         for(int i = 0; i < n; i++) {
//             int num;
//             cin >> num;
//             v.push_back(num);
//         }

//         long long sum = 0;

//         // for(int i = 1; i < v.size(); i++) {
//         //     if(v[i - 1] < v[i] && v[i] == maxPrice) {
//         //         sum += (v[i] - v[i - 1]) * tmpCnt;
//         //         tmpCnt = 1;
//         //     }
//         //     else if(v[i] == v[i - 1] && v[i] != maxPrice) {
//         //         tmpCnt++;
//         //     }
//         //     else if(v[i - 1] < v[i] && v[i] != maxPrice) {
//         //         sum += maxPrice - v[i - 1];
//         //     }
//         //     else if(v[i] == maxPrice) {
//         //         for(int j = i; j <= v.size() - 1; j++) {
//         //             maxPrice = max(v[j], v[j + 1]);
//         //         }
//         //         cout << maxPrice << endl;
//         //     }
//         // }
//         while(!v.empty()) {
//             auto maxPrice = max_element(v.begin(), v.end());

//             for(auto i = v.begin(); i != maxPrice; i++) {
//                 sum += *maxPrice - *i;
//             }
//             v.erase(v.begin(), maxPrice + 1);
//         }

//         cout << "#" << test_case << " ";
//         cout << sum << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }