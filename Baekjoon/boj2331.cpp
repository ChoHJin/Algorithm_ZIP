// #include <iostream>
// #include <unordered_map>
// #include <cmath>

// using namespace std;

// int getNextNum(int n, int p) {
//     int nextNumber = 0;

//     while(n > 0) {
//         int d = n % 10;
//         nextNumber += pow(d, p);
//         n /= 10;
//     }

//     return nextNumber;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, p;
//     cin >> n >> p;

//     unordered_map<int, int> cntMap;
//     int cur = n;
//     int cnt = 0;

//     while(cntMap.find(cur) == cntMap.end()) {
//         cntMap[cur] = cnt;
//         cnt++;
//         cur = getNextNum(cur, p);
//     }

//     cout << cntMap[cur] << endl;

//     return 0;
// }