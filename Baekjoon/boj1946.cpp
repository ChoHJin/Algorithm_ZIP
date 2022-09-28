// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// pair<int, int> emp[100001];
// int cnt;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t, n;

//     cin >> t;

//     while(t--) {
//         cin >> n;

//         for(int i = 0; i < n; i++) {
//             cin >> emp[i].first >> emp[i].second;
//         }

//         sort(emp, emp + n);
        
//         int temp = emp[0].second;
//         cnt = 0;
        

//         for(int i = 0; i < n; i++) {
//             if(temp >= emp[i].second) {
//                 temp = emp[i].second;
//                 cnt++;
//             }
//         }

//         cout << cnt << "\n";
//     }

//     return 0;
// }