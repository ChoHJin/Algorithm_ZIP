// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool compare(string a, string b) {
//     if(a.length() != b.length()) {
//         return a.length() < b.length();
//     } else {
//         int sumA = 0, sumB = 0;

//         for(char ch : a) {
//             if(isdigit(ch)) {
//                 sumA += ch - '0';
//             }
//         }
//         for(char ch : b) {
//             if(isdigit(ch)) {
//                 sumB += ch - '0';
//             }
//         }

//         if(sumA != sumB) {
//             return sumA < sumB;
//         } else {
//             return a < b;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<string> serialNumbers(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> serialNumbers[i];
//     }

//     sort(serialNumbers.begin(), serialNumbers.end(), compare);

//     for (string serial : serialNumbers) {
//         cout << serial << "\n";
//     }

//     return 0;
// }