// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v1;
// vector<int> v2;

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

//         cin >> n >> m;

//         for(int i = 0; i < n; i++) {
//             int a; cin >> a;
//             v1.push_back(a);
//         }

//         for(int i = 0; i < m; i++) {
//             int b; cin >> b;
//             v2.push_back(b);
//         }

//         int sum = 0;
//         int max = 0;

//         if(n > m) {
//             int size = n - m;

//             for(int i = 0; i <= size; i++) {
//                 sum = 0;
//                 int cnt = 0;

//                 for(int j = i; j < m + i; j++) {
//                     sum += (v1[j] * v2[cnt++]);
//                 }

//                 if(sum > max) max = sum;
//             }
//         }
//         else if(n < m) {
//             int size = m - n;
//             for(int i = 0; i <= size; i++) {
//                 int cnt = 0;
//                 sum = 0;
//                 for(int j = i; j < n + i; j++) {
//                     sum += (v1[cnt++] * v2[j]);
//                 }
//                 if(sum > max) max = sum;
//             }
//         }
//         else {
//             for(int i = 0; i < n; i++) {
//                 max += v1[i] * v2[i];
//             }
//         }


//         cout << "#" << test_case << " ";
//         cout << max << endl;

//         v1.clear();
//         v2.clear();
//     }

//     return 0;//정상종료시 반드시 0을 리턴해야합니다.
// }