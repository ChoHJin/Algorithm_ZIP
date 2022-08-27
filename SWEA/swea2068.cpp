// #include <iostream>
// #include <algorithm>

// using namespace std;

// int n[10];

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
//         for(int i = 0; i < 10; i++) {
//             cin >> n[i];
//         }
//         sort(n, n+10);

//         int ans = n[9];

//         cout << "#" << test_case << " " << ans << endl;
//     }   

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }