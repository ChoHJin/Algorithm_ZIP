// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int n;
// vector<int> nums;
// vector<int> operators;
// vector<int> selected;

// int maxResult = -1e9;
// int minResult = 1e9;

// void solve(int idx, int res) {
//     if(idx == n - 1) {
//         maxResult = max(maxResult, res);
//         minResult = min(minResult, res);
        
//         return;
//     }

//     for(int i = 0; i < 4; i++) {
//         if(operators[i] > 0) {
//             operators[i]--;

//             int nextResult;

//             if (i == 0) {  // '+'
//                 nextResult = res + nums[idx + 1];
//             } else if (i == 1) {  // '-'
//                 nextResult = res - nums[idx + 1];
//             } else if (i == 2) {  // '*'
//                 nextResult = res * nums[idx + 1];
//             } else {  // '/'
//                 nextResult = res / nums[idx + 1];
//             }

//             solve(idx + 1, nextResult);
//             operators[i]++;
//        }
//     }
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;

//     nums.resize(n);
//     operators.resize(n);

//     for(int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     for(int i = 0; i < 4; i++) {
//         cin >> operators[i];
//     }

//     solve(0, nums[0]);

//     cout << maxResult << '\n';
//     cout << minResult << '\n';


//     return 0;
// }