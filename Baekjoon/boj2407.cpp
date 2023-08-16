// #include <iostream>
// #include <vector>
// using namespace std;

// vector<vector<string>> arr;

// string add(string num1, string num2) {
//     string num = "";
//     int sum = 0;
//     int size = max(num1.size(), num2.size());

//     for (int i = 0; i < size || sum; i++) {
//         if (num1.size() > i) sum += num1[i] - '0';
//         if (num2.size() > i) sum += num2[i] - '0';

//         num += (sum % 10) + '0';
//         sum /= 10;
//     }

//     return num;
// }

// string combi(int n, int m) {
//     if (n == m || m == 0) return "1";

//     string &ans = arr[n][m];
//     if (!ans.empty()) return ans;

//     ans = add(combi(n - 1, m - 1), combi(n - 1, m));
//     return ans;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     arr.assign(n + 1, vector<string>(m + 1, ""));

//     string result = combi(n, m);
//     for (int i = result.size() - 1; i >= 0; i--) {
//         cout << result[i];
//     }

//     return 0;
// }