// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v(1000);

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
//         int ans = 0;
//         int maxCnt = 0;
//         int n;
//         int arr[101] = {0, };
        
//         cin >> n;

//         for(int i = 0; i < 1000; i++) {
//             cin >> v[i];
//         }

//         for(int i = 0; i < v.size(); i++) {
//             for(int j = 0; j <= 100; j++) {
//                 if(v[i] == j) {
//                     arr[j]++;
//                 }
//             }
//         }

//         for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
//             maxCnt = max(arr[i], maxCnt);
//             if(maxCnt == arr[i]) {
//                 maxCnt = maxCnt > arr[i] ? maxCnt : arr[i];
//                 ans = i;
//             }
//         }

//         cout << "#" << test_case << " ";
//         cout << ans << endl;
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }