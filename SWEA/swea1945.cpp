// #include <iostream>
// #include <vector>

// using namespace std;

// int arr[5] = {2, 3, 5, 7, 11};
// int ans[5];

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

//         for(int i = 0; i < 5; i++) {
//             ans[i] = 0;
//             while(n % arr[i] == 0) {
//                 n /= arr[i];
//                 ans[i]++;
//             }
//         }

//         cout << "#" << test_case << " ";
//         for(int i = 0; i < 5; i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }