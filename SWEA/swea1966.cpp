// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

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
//         vector<int> ans;

//         cin >> n;
        
//         for(int i = 0; i < n; i++) {
//             int num;
//             cin >> num;

//             ans.push_back(num);
//         }
        
//         //버블정렬1 (내가 알고있던 알고리즘)
//         for(int i = 0; i < ans.size() - 1; i++) {
//             for(int j = i + 1; j < ans.size(); j++) {
//                 if(ans[i] > ans[j]) {
//                     int tmp = ans[i];
//                     ans[i] = ans[j];
//                     ans[j] = tmp;
//                 }
//             }
//         }

//         //버블정렬2

//         // for(int i = 0; i < ans.size(); i++) {
//         //     for(int j = 1; j < ans.size() - i; j++) {
//         //         if(ans[j - 1] > ans[j]) {
//         //             int tmp = ans[j - 1];
//         //             ans[j - 1] = ans[j];
//         //             ans[j] = tmp;
//         //         }
//         //     }
//         // }
        
//         // sort(ans.begin(), ans.end());

//         cout << "#" << test_case << " ";
//         for(int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;

//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }