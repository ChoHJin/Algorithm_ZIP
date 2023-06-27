// #include <iostream>
// #include <vector>

// using namespace std;

// int findSet(vector<int>& parent, int x) {
//     if(parent[x] == x) {
//         return x;
//     }
    
//     return parent[x] = findSet(parent, parent[x]);
// }

// void unionSet(vector<int>& parent, int x, int y) {
//     int rx = findSet(parent, x);
//     int ry = findSet(parent, y);

//     if(rx != ry) {
//         parent[ry] = rx;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;

//     cin >> n >> m;

//     vector<int> v(n + 1);


//     for(int i = 1; i <= n; i++) {
//         v[i] = i;
//     }

//     while(m--) {
//         int op, a, b;
        
//         cin >> op >> a >> b;

//         if(op == 0) {
//             unionSet(v, a, b);
//         } else {
//             int ra = findSet(v, a);
//             int rb = findSet(v, b);

//             if(ra == rb) {
//                 cout << "YES" << '\n';
//             } else {
//                 cout << "NO" << '\n';
//             }
//         }
//     }

//     return 0;
// }