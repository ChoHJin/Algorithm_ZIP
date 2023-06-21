// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int arr[10];
//     map<int, int> ans;

//     int sum = 0;

//     for(int i = 0; i < 10; i++) {
//         cin >> arr[i];
//         sum += arr[i];

//         ans[arr[i]]++;
//     }

//     int max = 0;
//     int mode = 0;

//     for(const auto& pair : ans) {
//         if(pair.second > max) {
//             mode = pair.first;
//             max = pair.second;
//         }
//     }

//     int avg = sum / 10;

//     cout << avg << endl;
//     cout << mode << endl;

//     return 0;
// }