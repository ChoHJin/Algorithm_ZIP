// #include <iostream>
// #include <map>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     map<int, int> cowLoc;

//     int cross = 0;

//     for(int i = 0; i < n; i++) {
//         int cow, loc;
//         cin >> cow >> loc;

//         if(cowLoc.find(cow) != cowLoc.end()) {
//             if(cowLoc[cow] != loc) {
//                 cross++;
//             }
//         }
//         cowLoc[cow] = loc;
//     }

//     cout << cross << endl;

//     return 0;
// }