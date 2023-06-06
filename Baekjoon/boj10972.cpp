// #include <iostream>
// #include <vector>
// #include <algorithm>

// // using namespace std;

// // vector<int> v;

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int n;

// //     cin >> n;

// //     for(int i = 0; i < n; i++) {
// //         int num;
// //         cin >> num;

// //         v.push_back(num);
// //     }

// //     if(next_permutation(v.begin(), v.end())) {
// //         for(int i = 0; i < v.size(); i++) {
// //             cout << v[i] << " ";
// //         }
// //     } else {
// //         cout << -1 << endl;
// //     }

// //     return 0;
// // }

// using namespace std;

// bool nextPermutation(vector<int>& nums) {
//     int i = nums.size() - 1;

//     //꼭대기(i - 1)를 찾음
//     while(i > 0 && nums[i - 1] >= nums[i]) {
//         i--;
//     }
//     //꼭대기가 없는 경우, 이미 가장 큰 수열이므로 다음 순열이 존재하지 않음.
//     if(i <= 0) {
//         return false;
//     }

//     int j = nums.size() - 1;

//     while(nums[j] <= nums[i - 1]) {
//         j--;
//     }
//     //꼭대기와 처음으로 큰 값 교환
//     swap(nums[i - 1], nums[j]);

//     j = nums.size() - 1;
    
//     //꼭대기 이후의 숫자들을 뒤집음
//     while(i < j) {
//         swap(nums[i], nums[j]);
//         i++;
//         j--;
//     }

//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
    
//     vector<int> v;

//     for(int i = 0; i < n; i++) {
//         int num;
//         cin >> num;

//         v.push_back(num);
//     }

//     if(nextPermutation(v)) {
//         for(int i = 0; i < v.size(); i++) {
//             cout << v[i] << " ";
//         }
//     } else {
//         cout << -1 << endl;
//     }

//     return 0;
// }