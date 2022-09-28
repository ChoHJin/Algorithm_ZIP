// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> arr;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     int sum = 0;
//     int t = 1;

//     cin >> n >> m;

//     for(int i = 1; i <= m; i++) {
//         for(int j = 0; j < i; j++) {
//             arr.push_back(t);
//         }
//         t++;
//     }

//     for(int i = n; i <= m; i++) {
//         sum += arr[i - 1];
//     }

//     cout << sum << endl;

//     return 0;
// }