// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<int> v(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     int left = 0;
//     int right = n - 1;
//     int cnt = 0;
    
//     while(left < right) {
//         int sum = v[left] + v[right];

//         if(sum == m) {
//             cnt++;
//             left++;
//             right--;
//         } else if(sum < m) {
//             left++;
//         } else {
//             right--;
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }