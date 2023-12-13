// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> triangularNumbers;

// bool triangularSum(int sum) {
//     for(int i = 0; i < triangularNumbers.size(); i++) {
//         for(int j = i; j < triangularNumbers.size(); j++) {
//             for(int k = 0; k < triangularNumbers.size(); k++) {
//                 if(triangularNumbers[i] + triangularNumbers[j] + triangularNumbers[k] == sum) {
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n = 1;
//     int sum = 0;

//     while(n * (n + 1) / 2 < 1000) {
//         triangularNumbers.push_back(n * (n + 1) / 2);
//         n++;
//         sum += n;
//     }

//     int T;
//     cin >> T;

//     while (T--) {
//         int k;
//         cin >> k;

//         cout << triangularSum(k) << '\n';
//     }

//     return 0;
// }
