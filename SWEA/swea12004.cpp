// #include <iostream>

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
//         string ans;
//         bool flag = false;

//         cin >> n;
        
//         for(int i = 1; i <= 9; i++) {
//             for(int j = 1; j <= 9; j++) {
//                 if(i * j== n) {
//                     flag = true;
//                 }
//             }
//         }

//         if(flag) ans = "Yes";
//         else ans = "No";
        
//         cout << "#" << test_case << " ";
//         cout << ans << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }