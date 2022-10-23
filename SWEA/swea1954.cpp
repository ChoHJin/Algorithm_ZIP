// #include <iostream>
// #include <vector>

// using namespace std;

// int arr[11][11];

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
//         int cnt = 1;
//         int row = 0, col = -1;
//         int dir = 1;
//         cin >> n;

//         int nn = n;

//         while(n > 0) {
//             //열 증감방향
//             for(int i = 0; i < n; i++) {
//                 col += dir;
//                 arr[row][col] = cnt;
//                 cnt++;
//             }
//             n--;
//             //행 증감방향
//             for(int i = 0; i < n; i++) {
//                 row += dir;
//                 arr[row][col] = cnt;
//                 cnt++;
//             } 

//             dir *= -1;  //증가2 -> 감소2 -> 증가2
//         }


//         cout << "#" << test_case << " " << endl;
//         for(int i = 0; i < nn; i++) {
//             for(int j = 0; j < nn; j++) {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }

//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }