// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int arr[1001];
// int cnt, ans;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;

//     cin >> n >> k;

//     for(int i = 2; i <= n; i++) {
//         arr[i] = i;
//     }

//     for(int i = 2; i <= n; i++) {
//         for(int j = i; j <= n; j += i) {
//             if(arr[j] != 0) {
//                 cnt++;
//                 arr[j] = 0;
//             }
//             if(cnt == k) {
//                 ans = j;
//                 break; 
//             }
//         }
//         if(cnt == k) {
//             break;
//         }
        
//     }

//     cout << ans << endl;

//     return 0;
// }