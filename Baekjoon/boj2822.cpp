// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> score;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int sum = 0;

//     for(int i = 0; i < 8; i++) {
//         int n;
//         cin >> n;
//         score.push_back(n);
//     }
    
//     vector<int> tmp = score;
//     vector<int> ans;

//     sort(score.begin(), score.end());

//     for(int i = 0; i < score.size(); i++) {
//         if(score[2] < tmp[i]) {
//             sum += tmp[i];
//             ans.push_back(i);
//         }
    
//     }
    
//     cout << sum << endl;

//     sort(ans.begin(), ans.end());
//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] + 1 << " ";
//     }

//     return 0;
// }