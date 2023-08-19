// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

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

//     sort(v.begin(), v.end());

//     int mid = n % 2 == 0 ? n / 2 - 1 : n / 2;

//     int ans = v[mid];

//     cout << ans << endl;


//     return 0;
// }