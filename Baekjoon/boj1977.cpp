// #include <iostream>
// #include <algorithm>

// using namespace std;

// int arr[10001];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     int sum = 0;
//     int cnt = 0;

//     cin >> m >> n;

//     for(int i = 0; i < n; i++) {
//         if(i * i >= m && i * i <= n) {
//             arr[cnt] = i * i;
//             sum += i * i;
//             cnt++;
//         }
//     }

//     sort(arr, arr + cnt);

//     if(arr[0] == 0) {
//         cout << -1 << endl;
//     }
//     else {
//         cout << sum << "\n" << arr[0] << endl;
//     }

//     return 0;
// }