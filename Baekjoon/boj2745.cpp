// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string num;
//     int n, len, ans = 0;
//     cin >> num >> n;

//     len = num.length();
//     for(int i = 0; i < len; i++) {
//         int digit;
        
//         if(num[i] >= 'A' && num[i] <= 'Z') {
//             digit = num[i] - 'A' + 10;
//         } else {
//             digit = num[i] - '0';
//         }
//         ans += digit * pow(n, len-i-1);
//     }

//     cout << ans << endl;

//     return 0;
// }
