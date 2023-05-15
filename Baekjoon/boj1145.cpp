// #include <iostream>

// using namespace std;

// int arr[5];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for(int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     int ans = 1;

//     while(1) {
//         int cnt = 0;

//         for(int i = 0; i < 5; i++) {
//             if(ans % arr[i] == 0) {
//                 cnt++;
//             }
//         }

//         if(cnt >= 3) {
//             cout << ans << endl;
//             break;
//         }
//         ans++;
//     }

//     return 0;
// }