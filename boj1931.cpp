// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     int start, fin;
//     int cnt = 0;    
//     vector<pair<int, int>> mTime(n);

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         cin >> start >> fin;
//         mTime.push_back(make_pair(fin, start));
//     }

//     sort(mTime.begin(), mTime.end());

//     int t = 0; 

//     for(int i = 0; i < n; i++) {
//         if(t <= mTime[i].second) {
//             t = mTime[i].first;
//             cnt++;
//         }
//     }

//     cout << cnt << endl;

// }