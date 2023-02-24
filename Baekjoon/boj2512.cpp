// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int binarySearch(vector<int>& budgets, int target) {
//     int left = 0;
//     int right = *max_element(budgets.begin(), budgets.end());

//     while(left <= right) {
//         int mid = (left + right) / 2;
//         int total = 0;

//         for(int i = 0; i < budgets.size(); i++) {
//             total += min(budgets[i], mid);
//         }

//         if(total <= target) {
//             left = mid + 1;
//         }
//         else {
//             right = mid - 1;
//         }
//     }

//     return right;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n;

//     vector<int> budgets(n);

//     for(int i = 0; i < n; i++) {
//         cin >> budgets[i];
//     }

//     cin >> m;

//     int maxBudget = binarySearch(budgets, m);

//     cout << maxBudget << endl;

//     return 0;
// }