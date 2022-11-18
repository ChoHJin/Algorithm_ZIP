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
//     int arr[7][7];

//     for(test_case = 1; test_case <= T; ++test_case) {
        
//         int n;
        
//         cin >> n;

//         int p = n - 1;

//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < n; j++) {
//                 cin >> arr[i][j];
//             }
//         }

//         cout << "#" << test_case << endl;

//         for(int i = 0; i < n; i++) {
//             for(int j = n - 1; j >= 0; j--) {
//                 cout << arr[j][i];
//             }
//             cout << " ";
//             for(int k = n - 1; k >= 0; k--) {
//                 cout << arr[p][k];
//             }
//             cout << " ";

            
//             for(int l = 0; l < n; l++) {
//                 cout << arr[l][p];
//             }
//             cout << endl;
//             p--;
//             if(p < 0) break;
//         }
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }