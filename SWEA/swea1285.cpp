// #include <iostream>
// #include <algorithm>
// #include <cstdlib>

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
//         int arr[1001];

//         int cnt = 0;

//         cin >> n;

//         for(int i = 0; i < n; i++) {
//             int dist; cin >> dist;

//             arr[i] = abs(dist); 
//         }

//         sort(arr, arr + n);

//         int ans = arr[0];
        
//         for(int i = 0; i < n; i++) {
//             if(arr[i] == ans) {
//                 cnt++;
//             }
//         }
        

//         cout << "#" << test_case << " ";
//         cout << ans << " " << cnt << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }