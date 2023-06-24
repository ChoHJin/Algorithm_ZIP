// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     int dp[1001];   //dp[i]는 인덱스 i까지의 가장 큰 증가 부분 수열의 합을 저장

//     int ans = 0;

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     dp[0] = arr[0]; //첫번째 원소로 초기화

//     for(int i = 1; i <= n; i++) {
//         dp[i] = arr[i]; //자기 자신을 기준으로 초기화

//         for(int j = 0; j < i; j++) {
//             if(arr[i] > arr[j]) {
//                 dp[i] = max(dp[i], dp[j] + arr[i]);
//             }
//         }
//     }

//     ans = *max_element(dp, dp + n); //dp 배열에서 가장 큰 값을 찾음

//     cout << ans << endl;

//     return 0;
// }