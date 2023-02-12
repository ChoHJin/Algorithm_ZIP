// #include <iostream>
// #include <vector>

// using namespace std;

// vector<vector<int>> map;
// int n;

// void fw() {
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             for(int k = 0; k < n; k++) {
//                 if(map[j][i] && map[i][k]) {
//                     map[j][k] = 1;
//                 }
//             }
//         }
//     }
// }   


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;
//     map.resize(n);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             int a;
//             cin >> a;
//             map[i].push_back(a);
//         }
//     }

//     fw();

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cout << map[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;


//     return 0;
// }