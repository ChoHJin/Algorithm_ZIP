// #include <iostream>
// #include <climits>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string a, b;

//     cin >> a >> b;

//     int diff = b.size() - a.size();
//     int minDiff = INT_MAX;

//     for(int i = 0; i <= diff; i++) {
//         int cnt = 0;

//         for(int j = 0; j < a.size(); j++) {
//             if(a[j] != b[i + j]) {
//                 cnt++;
//             }
//         }

//         if(cnt < minDiff) {
//             minDiff = cnt;
//         }
//     }

//     cout << minDiff << endl;

//     return 0;
// }