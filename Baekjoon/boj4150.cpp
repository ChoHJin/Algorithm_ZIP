// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// string dp[10001];

// string sum(string a, string b) {
//     int num = 0;
//     int carry = 0;
//     string res = "";

//     reverse(a.begin(), a.end());
//     reverse(b.begin(), b.end());

//     while(a.length() < b.length()) {
//         a += "0";
//     }

//     while(a.length() > b.length()) {
//         b += "0";
//     }

//     for(int i = 0; i < a.length(); i++) {
//         num = ((a[i] - '0') + (b[i] - '0') + carry) % 10;
//         res += to_string(num);
//         carry = ((a[i] - '0') + (b[i] - '0') + carry) / 10;
//     }

//     if(carry != 0) {
//         res += to_string(carry);
//     }

//     reverse(res.begin(), res.end());
    
//     return res;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     dp[0] = to_string(0);
//     dp[1] = to_string(1);

//     for(int i = 2; i <= n; i++) {
//         dp[i] = sum(dp[i - 1], dp[i - 2]);
//     }

//     cout << dp[n];

//     return 0;
// }