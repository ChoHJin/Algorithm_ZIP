// #include <iostream>
// #include <vector>

// using namespace std;

// int n, m, ans;
// int parents[51];
// vector<int> known;
// vector<vector<int>> party(51); 

// int Find(int x) {
//     if(x == parents[x]) {
//         return x;
//     }
//     return x = Find(parents[x]);
// }

// void Union(int x, int y) {
//     x = Find(x);
//     y = Find(y);
//     parents[x] = y;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int k;

//     cin >> n >> m;
//     cin >> k;
    
//     for(int i = 0; i < k; i++) {
//         int a;
//         cin >> a;
//         known.push_back(a);
//     }

//     for(int i = 1; i <= m; i++) {
//         int num;
//         cin >> num;
//         for(int j = 0; j < num; j++) {
//             int a; 
//             cin >> a;
//             party[i].push_back(a);
//         }
//     }
    
//     for(int i = 1; i <= n; i++) {
//         parents[i] = i;
//     }

//     for(int i = 1; i <= m; i++) {
//         int a = party[i][0];
//         for(int j = 0; j < party[i].size(); j++) {
//             Union(a, party[i][j]);
//         }
//     }

//     for(int i = 1; i <= m; i++) {
//         bool isKnown = true;
//         int a= party[i][0];
//         for(int j = 0; j < known.size(); j++) {
//             if(Find(a) == Find(known[j])) {
//                 isKnown = false;
//                 break;
//             }
//         }
//         if(isKnown) ans++;
//     }

//     cout << ans;
    
//     return 0;
// }