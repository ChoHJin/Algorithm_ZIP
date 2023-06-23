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
//     vector<int> incDp(n, 1);
//     vector<int> decDp(n, 1);
//     int ans = 0;

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //가장 긴 증가하는 부분 수열
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i; j++) {
//             if(arr[i] > arr[j]) {
//                 incDp[i] = max(incDp[i], incDp[j] + 1);
//             }
//         }
//     }

//     //가장 긴 감소하는 부분 수열
//     for(int i = n - 1; i >= 0; i--) {
//         for(int j = n - 1; j > i; j--) {
//             if(arr[i] > arr[j]) {
//                 decDp[i] = max(decDp[i], decDp[j] + 1);
//             }
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         ans = max(ans, incDp[i] + decDp[i]);
//     }

//     cout << ans - 1 << endl;


//     return 0;
// }