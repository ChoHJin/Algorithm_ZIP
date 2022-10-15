// #include <iostream>

// using namespace std;

// int arr[51];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     int dasom = 0;
//     int ans = 0;

//     cin >> n;
    
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     dasom = arr[0];

//     while(1) {
//         int max = 0;
//         int idx = 0;

//         //가장 많은 득표수 찾기
//         for(int i = 1; i <= n - 1; i++) {
//             if(max < arr[i]) {
//                 max = arr[i];
//                 idx = i;
//             }
//         }
//         //찾은 득표수가 다솜이의 표보다 적으면
//         if(dasom > max) {
//             cout << ans << endl;
//             break;
//         }
//         //찾은 득표수가 다솜이보다 크면 매수해옴
//         dasom++;
//         arr[idx]--;
//         ans++;
//     }    

//     return 0;
// }