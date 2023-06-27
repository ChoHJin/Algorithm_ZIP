// #include <iostream>
// #include <vector>

// using namespace std;

// //부모를 찾는 함수
// int findSet(vector<int>& parent, int x) {
//     if(parent[x] == x) {
//         return x;   //x가 루트 노드인 경우
//     }
    
//     return parent[x] = findSet(parent, parent[x]);  //경로 압축
// }

// //두 집합을 합치는 함수
// void unionSet(vector<int>& parent, int x, int y) {
//     int rx = findSet(parent, x);
//     int ry = findSet(parent, y);

//     if(rx != ry) {
//         parent[ry] = rx;    //y의 루트를 x의 루트로 설정
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