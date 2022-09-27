// #include <iostream>
// #include <vector>
// #include <cmath>
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
//         int sum = 0;
//         int ans = 0;
//         vector<int> arr;
//         arr.resize(10);

//         for(int i = 0; i < 10; i++) {
//             cin >> arr[i];
//         }

//         sort(arr.begin(), arr.end());

//         for(int i = 1; i < arr.size() - 1; i++) {
//             sum += arr[i];
//         }

//         ans = round(sum / 8.0F);
        
//         cout << "#" << test_case << " " << ans << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }