// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
    
//     cin >> n >> m;
    
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int start = 0, end = 0;
//     int sum = arr[0];
//     int cnt = 0;

//     while(end < n) {
//         if(sum == m) {
//             cnt++;
//             sum -= arr[start++];
//         }
//         else if(sum < m) {
//             end++;
//             sum += arr[end];
//         }
//         else {
//             sum -= arr[start++];
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }