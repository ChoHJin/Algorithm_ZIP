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
//         long long n;
//         string ans;

//         cin >> n;

//         if(n % 2 != 0) {
//             ans = "Bob";
//         } 
//         else {
//             ans = "Alice";
//         }

//         cout << "#" << test_case << " ";
//         cout << ans << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }