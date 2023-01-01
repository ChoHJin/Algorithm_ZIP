// #include <iostream>
// #include <vector>

// using namespace std;

// vector<pair<int, int>> map;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     for(int i = 0; i < 3; i++) {
//         int x, y;

//         cin >> x >> y;
//         map.push_back(make_pair(x, y));
//     }

//     if(map[0].first == map[1].first) {
//         cout << map[2].first << " ";
//     }
//     else if(map[0].first == map[2].first) {
//         cout << map[1].first << " ";
//     }
//     else cout << map[0].first << " ";

//     if(map[0].second == map[1].second) {
//         cout << map[2].second << endl;
//     }
//     else if(map[0].second == map[2].second) {
//         cout << map[1].second << endl;
//     }
//     else cout << map[0].second << endl;


//     return 0;
// }