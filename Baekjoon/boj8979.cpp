// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Country {
//     int id;
//     int gold, silver, bronze;
// };

// bool cmp(const Country& a, const Country& b) {
//     if(a.gold != b.gold) {
//         return a.gold > b.gold;
//     }
//     if(a.silver != b.silver) {
//         return a.silver > b.silver;
//     }
//     if(a.bronze != b.bronze) {
//         return a.bronze > b.bronze;
//     }

//     return a.id == 1;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
//     cin >> n >> k;

//     vector<Country> v(n);

//     for(int i = 0; i < n; i++) {
//         int id, gold, silver, bronze;
//         cin >> id >> gold >> silver >> bronze;

//         v[i] = {id, gold, silver, bronze};
//     }

//     sort(v.begin(), v.end(), cmp);

//     int rank = 0, val = 0;

//     for(int i = 0; i < n; i++) {
//         if(v[i].id == k) {
//             rank = i;
//             break;
//         }
//     }

//     for(int i = rank - 1;; i--) {
//         if(v[i].gold != v[rank].gold || 
//         v[i].silver != v[rank].silver ||
//         v[i].bronze != v[rank].bronze) {
//             break;
//         }
//         val++;
//     }

//     cout << rank - val + 1 << endl;

//     return 0;
// }