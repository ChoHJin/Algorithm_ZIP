// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// int n, m, num;
// vector<int> v;

// void binarySearch(int target) {
//     int start = 0;
//     int end = n - 1;
//     int mid = 0;

//     while(end >= start) {
//         mid = (start + end) / 2;

//         if(target == v[mid]) {
//             cout << 1 << "\n";
//             return;
//         }

//         else if (v[mid] < target) {
//             start = mid + 1;
//         }

//         else {
//             end = mid - 1;
//         }
//     }

//     cout << 0 << "\n";
//     return;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;

//     v.resize(n);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     cin >> m;

//     for(int i = 0; i < m; i++) {
//         cin >> num;
//         // if(binary_search(v.begin(), v.end(), num)) {
//         //     cout << 1 << "\n";
//         // }

//         // else 
//         //     cout << 0 << "\n";

//         binarySearch(num);
//     }
    
//     return 0;
// }