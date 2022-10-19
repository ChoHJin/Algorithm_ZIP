// #include <iostream>
// #include <algorithm>

// using namespace std;


// int k, n;
// long long ans;
// long long arr[10001];

// void binarySearch(long long start, long long end) {
//     if(start >= end) {
//         return;
//     }

//     long long mid = (start + end) / 2;
//     int cnt = 0;
//     for(int i = 0; i < k; i++) {
//         cnt += arr[i] / mid;
//     }

//     if(cnt < n) {
//         binarySearch(start, mid);
//     }
//     else {
//         ans = max(ans, mid);
//         binarySearch(mid + 1, end);
//     }

// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long maxLen = 0;
//     cin >> k >> n;

//     for(int i = 0; i < k; i++) {
//         cin >> arr[i];
//         maxLen = max(maxLen, arr[i]);
//     }
    
//     binarySearch(1, maxLen + 1);
    
//     cout << ans << endl;   

//     return 0;
// }