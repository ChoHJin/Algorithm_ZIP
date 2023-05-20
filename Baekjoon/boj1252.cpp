// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// string addBinary(string a, string b) {
//     string result;
//     int carry = 0;
//     int i = a.length() - 1;
//     int j = b.length() - 1;

//     while (i >= 0 || j >= 0 || carry > 0) {
//         int sum = carry;

//         if (i >= 0) {
//             sum += a[i] - '0';
//             i--;
//         }

//         if (j >= 0) {
//             sum += b[j] - '0';
//             j--;
//         }

//         carry = sum / 2;
//         sum %= 2;

//         result += to_string(sum);
//     }

//     reverse(result.begin(), result.end());

//     return result;
// }

// int main() {
//     string a, b;
//     cin >> a >> b;

//     string result = addBinary(a, b);

//     int cnt = 0;

//     for(int i = 0; i < result.size(); i++) {
//         if(result[i] == '1') {
//             break;
//         } else {
//             cnt++;
//         }
//     }

//     if(result.size() <= 1) {
//         cout << result << endl;
//     } else {
//         result.erase(result.begin(), result.begin() + cnt);

//         if(result.size() == 0) {
//             result += '0';
//         }
//         cout << result << endl;
//     }
    
//     return 0;
// }
