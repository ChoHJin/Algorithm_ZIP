// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
    
//     vector<pair<int, int>> ingredients(n);

//     for (int i = 0; i < n; ++i) {
//         cin >> ingredients[i].first >> ingredients[i].second;
//     }

//     int minDiff = 1e9;

//     for (int i = 1; i < (1 << n); ++i) {  
//         int taste = 1;
//         int bitterness = 0;

//         for (int j = 0; j < n; ++j) {
//             if (i & (1 << j)) {  
//                 taste *= ingredients[j].first;
//                 bitterness += ingredients[j].second;
//             }
//         }
//         minDiff = min(minDiff, abs(taste - bitterness));
//     }

//     cout << minDiff << endl;

//     return 0;
// }