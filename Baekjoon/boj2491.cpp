// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     vector<int> incDp(n, 1);    //증가 수열길이를 저장하는 dp
//     vector<int> decDp(n, 1);    //감소 수열길이를 저장하는 dp

//     int maxLen = 1;

//     for(int i = 1; i < n; i++) {
//         if(v[i] >= v[i - 1]) {
//             incDp[i] = incDp[i - 1] + 1;
//         }
        
//         if(v[i] <= v[i - 1]) {
//             decDp[i] = decDp[i - 1] + 1;
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         maxLen = max(maxLen, max(incDp[i], decDp[i]));
//     }

//     cout << maxLen << endl;

//     return 0;
// }