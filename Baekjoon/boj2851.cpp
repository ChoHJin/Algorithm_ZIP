// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> score;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int ans = 0;

//     for(int i = 0; i < 10; i++) {
//         int n;
//         cin >> n;

//         score.push_back(n);
//     }

//     for(int i = 0; i < score.size(); i++) {
//         ans += score[i];

//         if(ans == 100) {
//             break;
//         }
//         else if (ans > 100) {
//             if(ans - 100 > 100 - ans + score[i]) {
//                 ans -= score[i];
//                 break;
//             }
//         }
//     }

//     cout << ans << endl;
    
//     return 0;
// }