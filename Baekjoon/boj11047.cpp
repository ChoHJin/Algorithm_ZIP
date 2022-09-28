// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {

//     int n, k;
//     int num;
//     int coin[11];
//     int cnt = 0;

//     cin >> n >> k;

//     for(int i = 0; i < n; i++) {
//         cin >> coin[i];
//     }
//     //최솟값을 구하기 위해 내림차순으로 정렬하여 큰 동전부터 뺄 수 있도록 함
//     sort(coin, coin+n, greater());

//     for(int i = 0; i < n; i++) {
//         while(k - coin[i] >= 0){ 
//             k -= coin[i];
//             cnt++;
//         }
//     }
//     cout << cnt;
// }