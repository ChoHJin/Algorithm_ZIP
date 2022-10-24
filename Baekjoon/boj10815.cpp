// #include <iostream>
// #include <vector>
// #include <algorithm>

// #define MAX 500001

// using namespace std;

// int skarr[MAX];
// int arr[MAX];
// int ans;

// int n, m;

// bool binarySearch(int target) {
//     int low = 0;
//     int high = n - 1;

//     while(low <= high) {
//         int mid = (low + high) / 2;

//         if(target == skarr[mid]) {
//             return true;
//         }

//         else if(skarr[mid] < target) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     return false;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         cin >> skarr[i];
//     }

//     cin >> m;

//     for(int i = 0; i < m; i++) {
//         cin >> arr[i];
//     }

//     sort(skarr, skarr+n);

//     for(int i = 0; i < m; i++) {
//         ans = binarySearch(arr[i]);
//         cout << ans << " ";
//     }
//     cout << endl;

//     return 0;
// }