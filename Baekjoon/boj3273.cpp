// #include <iostream>
// #include <algorithm>

// using namespace std;

// int arr[100001];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, x, ans = 0;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     sort(arr, arr + n);     //입력받은 수열을 오름차순으로 정렬

//     cin >> x;

//     int left = 0, right = n - 1;

//     while (left < right) {  //투 포인터를 사용하여 문제 해결
//         int sum = arr[left] + arr[right];
//         if (sum == x) {
//             ans++;
//             left++;
//             right--;
//         } else if (sum > x) {
//             right--;
//         } else {
//             left++;
//         }
//     }
//     cout << ans << '\n';

//     return 0;
// }