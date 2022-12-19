// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> a;
// vector<int> b;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int x, y, p1, p2;
    
//     cin >> x >> y >> p1 >> p2;

//     a.push_back(p1);
//     b.push_back(p2);

//     while(1) {
//         int ans = 0;
//         a.push_back(p1 += x);
//         b.push_back(p2 += y);

//         for(int i = 0; i < a.size(); i++) {
//             for(int j = 0; j < b.size(); j++) {
//                 if(a[i] == b[j]) {
//                     ans = a[i];
//                     break;
//                 }
//             }
//         }

//         if(ans != 0) {
//             cout << ans << endl;
//             break;
//         }

//         if(a.size() == 1000) { 
//             cout << -1 << endl;
//             break;
//         }
//     }

//     return 0;
// }