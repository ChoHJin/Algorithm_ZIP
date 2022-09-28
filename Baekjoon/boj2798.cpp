// #include <iostream>
// #include <algorithm>

// using namespace std;

// int arr[101];
// int sum, temp;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m = 0;
    
//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     sort(arr, arr+n);

//     for(int i = 0; i < n - 2; i++) {
//         for(int j = i + 1; j < n - 1; j++) {
//             for(int k = j + 1; k < n; k++) {
//                 temp = arr[i] + arr[j] + arr[k];

//                 if(temp <= m && temp > sum) {
//                     sum = temp;
//                 }
//             }   
//         }
//     }
//     cout << sum << endl;

//     return 0;
// }