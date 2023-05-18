// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v(n);
//     vector<int> ans(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     for(int i = 0; i < n; i++) {
//         int cnt = 0;

//         for(int j = 0; j < n; j++) {
//             if(v[i] == cnt) {
//                 if(!ans[j]) {
//                     ans[j] = i + 1;
//                     break;
//                 }
//             } else {
//                 if(!ans[j]) cnt++;
//             }           
//         }
//     }

//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }


//     return 0;
// }