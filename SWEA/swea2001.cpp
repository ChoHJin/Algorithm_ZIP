// #include <iostream>

// using namespace std;

// int map[16][16];

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
//         int n, m;
//         int ans = 0;

//         cin >> n >> m;

//         //파리 영역 생성
//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < n; j++) {
//                 cin >> map[i][j];
//             }
//         }
        
//         //파리채
//         for(int i = 0; i <= n - m; i++) {
//             for(int j = 0; j <= n - m; j++) {
//                 int sum = 0;

//                 for(int k = i; k < i + m; k++) {
//                     for(int l = j; l < j + m; l++) {
//                         sum += map[k][l];
//                     }
//                 }

//                 if(sum > ans) {
//                     ans = sum;
//                 }
//             }
//         }


//         cout << "#" << test_case << " " << ans << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }