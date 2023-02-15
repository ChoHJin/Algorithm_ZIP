// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;

//     cin >> t;

//     vector<pair<pair<int, int>, pair<int, string>>> v(t);

//     for(int i = 0; i < t; i++) {
//         cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
//     }

//     sort(v.begin(), v.end());

//     cout << v[t - 1].second.second << '\n' << v[0].second.second << endl;

//     return 0;
// }