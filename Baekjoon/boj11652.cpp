// #include <iostream>
// #include <map>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;

//     cin >> n;

//     map<long long, int> cntMap;

//     for(int i = 0; i < n; i++) {
//         long long num;
//         cin >> num;

//         cntMap[num]++;
//     }

//     long long ans = 0;
//     int maxCnt = 0;

//     for(auto it = cntMap.begin(); it != cntMap.end(); it++) {
//         if(it -> second > maxCnt || (it -> second == maxCnt && it -> first < ans)) {
//             ans = it -> first;
//             maxCnt = it -> second;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }